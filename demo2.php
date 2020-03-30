<?php

require 'class.Address.inc';
require 'class.Database.inc';

echo '<h2>Instantiating Address';
$address = new Address;


// Assigning values to the properties of address class.
echo "<h2>Setting Properties</h2>";
$address->street_address_1 = '123 Fake Street';
$address->street_address_2 = 'Bla Bla Bla';
$address->city_name = 'Townsville';
$address->subdivision_name = 'State';
$address->country_name = 'United States of America';
$address->address_type_id = 1;

echo $address;


echo '<h2>Testing Address construct with an array</h2>';
$address_2 = new Address(array(
  'street_address_1' => '123 Stallite Town',
  'city_name' => 'Villageland',
  'subdivision_name' => 'Region',
  'country_name' => 'Canada',
));
echo $address_2;
