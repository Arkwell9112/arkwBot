#include "ExchangeReplyTaxVendorMessage.h"

void ExchangeReplyTaxVendorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeReplyTaxVendorMessage(input);
}

void ExchangeReplyTaxVendorMessage::deserializeAs_ExchangeReplyTaxVendorMessage(ICustomDataInput &input) {
    this->_objectValueFunc(input);
    this->_totalTaxValueFunc(input);
}

void ExchangeReplyTaxVendorMessage::_objectValueFunc(ICustomDataInput &input) {
    this->objectValue = input.readVarUhLong();

}

void ExchangeReplyTaxVendorMessage::_totalTaxValueFunc(ICustomDataInput &input) {
    this->totalTaxValue = input.readVarUhLong();

}

