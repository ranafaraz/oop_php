<?php

/**
 * Class having properties of Address
 */
class Address
{
  // Property Names

  // Street address.
  public $street_address_1;
  public $street_address_2;

  //Name of the City.
  public $city_name;

  //Name of the subdivision.
  public $subdivision_name;

  // Postal code.
  protected $_postal_code;

  // Name of the Country.
  public $country_name;

  // Primary key of an Address.
  protected $_address_id;

  // When the record was created and updated.
  protected $_time_created;
  protected $_time_updated;

  // Magic __get.
  // @para string $name
  // @return mixed.
  function __get($name) {
    // Logic for this special behavior for Postal Code.

    // Postal Code LookUp if unset.
    if (!$this->_postal_code) {
      $this->_postal_code = $this->_postal_code_guess();
    }


    // Attempt to return a protected property by name.
    $protected_property_name = '_' . $name;
    if (property_exists($this, $protected_property_name)) {
      return $this->$protected_property_name;
    }

    // Unable to access property; trigger error.
    trigger_error('Undefined property via __get: ' . $name);
    return NULL;
}

  // Maagic __set.
  // @param string $name
  // @param mixed $value
  function __set($name, $value) {
    // Allow anything to set the postal code.
    if ('postal_code' == $name) {
      $this->name = $value;
      return;
    }

    // Unable to access property; trigger error.
    trigger_error('Undefined or Unallowed property via __set(): ' . $name);
  }

  // Placeholder function to lookup the postal code in the database table.
  // Guess the Postal Code against Subdivision and city name.
  // Todo replace with a database LOOKUP
  // return string.
  protected function _postal_code_guess() {
    return 'LOOKUP';
  }


  /**
  *Display an address in HTML
  **/
  function display() {
    $output = '';

    // Street address.
    $output .= $this->street_address_1;
    if ($this->street_address_2) {
      $output .= '<br/>' . $this->street_address_2;
    }

    // City, subdivision and Postal Code
    $output .= '<br/>';
    $output .= $this->city_name . ', ' . $this->subdivision_name . ', ';
    $output .= $this->postal_code;

    // Country
    $output .= '<br/>';
    $output .= $this->country_name;

    return $output;
  }
}
