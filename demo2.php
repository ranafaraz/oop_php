<?php

//require 'class.Address.inc';
//require 'class.Database.inc';

/**
 * Define autoloader
 * @param string $class_name
 */
function __autoload($class_name){
    include 'class.' . $class_name . '.inc';
}

echo '<h2>Instantiating AddressResidence';
$address_residence = new AddressResidence();


// Assigning values to the properties of address class.
echo "<h2>Setting Properties</h2>";
$address_residence->street_address_1 = '123 Fake Street';
$address_residence->street_address_2 = 'Bla Bla Bla';
$address_residence->city_name = 'Townsville';
$address_residence->subdivision_name = 'State';
$address_residence->country_name = 'United States of America';
echo $address_residence;

echo '<tt><pre>' . var_export($address_residence, TRUE) . '</pre></tt>';

echo '<h2>Testing Address construct with an array</h2>';
$address_business = new AddressBusiness(array(
  'street_address_1' => '123 Stallite Town',
  'city_name' => 'Villageland',
  'subdivision_name' => 'Region',
  'country_name' => 'Canada',
));
echo $address_business;
echo '<tt><pre>' . var_export($address_business, TRUE) . '</pre></tt>';
