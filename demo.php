<?php

require 'class.Address.inc';

echo '<h2>Instantiating Address';
$address = new Address;

// Echoing the empty properties of address.
echo '<h2>Empty Address</h2>';
echo '<tt><pre>' . var_export($address, TRUE) . '</pre></tt>';

// Assigning values to the properties of address class.
echo "<h2>Setting Properties</h2>";
$address->street_address_1 = '123 Fake Street';
$address->street_address_2 = 'Bla Bla Bla';
$address->city_name = 'RYK';
$address->subdivision_name = 'State';
$address->postal_code = '64200';
$address->country_name = 'Pakistan';

echo '<tt><pre>' . var_export($address, TRUE) . '</pre></tt>';

// Displaying the Address.
echo '<h2>Displaying Address</h2>';
echo $address->display();

// Testing protected property access.
echo '<h2>Testing Protected Access.</h2>';
echo "Address ID: {$address->_address_id}";

echo '<h2>Testing magic __get and __set</h2>';
unset($address->postal_code);
echo $address->display();
