#include "HaapiConfirmationMessage.h"

void HaapiConfirmationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiConfirmationMessage(input);
}

void HaapiConfirmationMessage::deserializeAs_HaapiConfirmationMessage(ICustomDataInput &input) {
    this->_kamasFunc(input);
    this->_amountFunc(input);
    this->_rateFunc(input);
    this->_actionFunc(input);
    this->_transactionFunc(input);
}

void HaapiConfirmationMessage::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

void HaapiConfirmationMessage::_amountFunc(ICustomDataInput &input) {
    this->amount = input.readVarUhLong();

}

void HaapiConfirmationMessage::_rateFunc(ICustomDataInput &input) {
    this->rate = input.readVarUhShort();

}

void HaapiConfirmationMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

void HaapiConfirmationMessage::_transactionFunc(ICustomDataInput &input) {
    this->transaction = input.readUTF();
}

