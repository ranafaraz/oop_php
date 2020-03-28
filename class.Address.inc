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
  public $postal_code;

  // Name of the Country.
  public $country_name;


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
