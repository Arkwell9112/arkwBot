#include "HaapiConfirmationRequestMessage.h"

void HaapiConfirmationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiConfirmationRequestMessage(input);
}

void HaapiConfirmationRequestMessage::deserializeAs_HaapiConfirmationRequestMessage(ICustomDataInput &input) {
    this->_kamasFunc(input);
    this->_ogrinesFunc(input);
    this->_rateFunc(input);
    this->_actionFunc(input);
}

void HaapiConfirmationRequestMessage::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

void HaapiConfirmationRequestMessage::_ogrinesFunc(ICustomDataInput &input) {
    this->ogrines = input.readVarUhLong();

}

void HaapiConfirmationRequestMessage::_rateFunc(ICustomDataInput &input) {
    this->rate = input.readVarUhShort();

}

void HaapiConfirmationRequestMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

