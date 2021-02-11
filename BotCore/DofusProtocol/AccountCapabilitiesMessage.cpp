#include "../IO/BooleanByteWrapper.h"
#include "AccountCapabilitiesMessage.h"

void AccountCapabilitiesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccountCapabilitiesMessage(input);
}

void AccountCapabilitiesMessage::deserializeAs_AccountCapabilitiesMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_accountIdFunc(input);
    this->_breedsVisibleFunc(input);
    this->_breedsAvailableFunc(input);
    this->_statusFunc(input);
}

void AccountCapabilitiesMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->tutorialAvailable = BooleanByteWrapper::getFlag(_box0, 0);
    this->canCreateNewCharacter = BooleanByteWrapper::getFlag(_box0, 1);
}

void AccountCapabilitiesMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void AccountCapabilitiesMessage::_breedsVisibleFunc(ICustomDataInput &input) {
    this->breedsVisible = input.readVarUhInt();

}

void AccountCapabilitiesMessage::_breedsAvailableFunc(ICustomDataInput &input) {
    this->breedsAvailable = input.readVarUhInt();

}

void AccountCapabilitiesMessage::_statusFunc(ICustomDataInput &input) {
    this->status = input.readByte();
}

