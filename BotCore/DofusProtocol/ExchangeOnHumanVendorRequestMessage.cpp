#include "ExchangeOnHumanVendorRequestMessage.h"

void ExchangeOnHumanVendorRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeOnHumanVendorRequestMessage(input);
}

void ExchangeOnHumanVendorRequestMessage::deserializeAs_ExchangeOnHumanVendorRequestMessage(ICustomDataInput &input) {
    this->_humanVendorIdFunc(input);
    this->_humanVendorCellFunc(input);
}

void ExchangeOnHumanVendorRequestMessage::_humanVendorIdFunc(ICustomDataInput &input) {
    this->humanVendorId = input.readVarUhLong();

}

void ExchangeOnHumanVendorRequestMessage::_humanVendorCellFunc(ICustomDataInput &input) {
    this->humanVendorCell = input.readVarUhShort();

}

