<?php

/**
 * Business Address.
 *
 * @author DEXTER
 */
class AddressBusiness extends Address {
    /**
     * Initialization.
     */
    protected function _init() {
        $this->_setAddressTypeId(Address::ADDRESS_TYPE_BUSINESS);
    }
}
