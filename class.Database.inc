<?php

// MySQLi database; only one connection is allowed.

class Database {
  // Properties

  private $_connection;
  // Store the single instance.
  private static $_instance;

  // Get an instance of the database.
  // @return Database
  // Public static method so that any part of the program can access database instance.
  public static function getInstance() {
    // if instance not exists, create itself.
    if (!self::$_instance) {
      self::$_instance = new self();
    }
    return self::$_instance;
  }

  // Constructor for the database object.
  public function __construct() {
    // arrguments
    $this->_connection = new mysqli('localhost', 'root', '', 'sandbox');
    // Error handling.
    if (mysqli_connect_error()) {
      trigger_error('Failed to  connect to MySQL: ' . mysqli_connect_error(), E_USER_ERROR);
    }
  }

  // Clone Magic Method specifies how an object is duplicated.

  // Empty clone magic method to prevent duplication.
  private function __clone() {

    // Get the mysqli connection.
    public function getConnection() {
      return $this->_connection;
    }
  }
}
