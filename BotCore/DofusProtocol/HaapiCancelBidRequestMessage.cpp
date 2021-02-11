#include "HaapiCancelBidRequestMessage.h"

void HaapiCancelBidRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiCancelBidRequestMessage(input);
}

void HaapiCancelBidRequestMessage::deserializeAs_HaapiCancelBidRequestMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_typeFunc(input);
}

void HaapiCancelBidRequestMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

void HaapiCancelBidRequestMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

