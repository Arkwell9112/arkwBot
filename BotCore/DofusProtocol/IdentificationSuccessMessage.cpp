#include "../IO/BooleanByteWrapper.h"
#include "IdentificationSuccessMessage.h"

void IdentificationSuccessMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentificationSuccessMessage(input);
}

void IdentificationSuccessMessage::deserializeAs_IdentificationSuccessMessage(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_loginFunc(input);
    this->_nicknameFunc(input);
    this->_accountIdFunc(input);
    this->_communityIdFunc(input);
    this->_secretQuestionFunc(input);
    this->_accountCreationFunc(input);
    this->_subscriptionElapsedDurationFunc(input);
    this->_subscriptionEndDateFunc(input);
    this->_havenbagAvailableRoomFunc(input);
}

void IdentificationSuccessMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->hasRights = BooleanByteWrapper::getFlag(_box0, 0);
    this->hasConsoleRight = BooleanByteWrapper::getFlag(_box0, 1);
    this->wasAlreadyConnected = BooleanByteWrapper::getFlag(_box0, 2);
}

void IdentificationSuccessMessage::_loginFunc(ICustomDataInput &input) {
    this->login = input.readUTF();
}

void IdentificationSuccessMessage::_nicknameFunc(ICustomDataInput &input) {
    this->nickname = input.readUTF();
}

void IdentificationSuccessMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void IdentificationSuccessMessage::_communityIdFunc(ICustomDataInput &input) {
    this->communityId = input.readByte();

}

void IdentificationSuccessMessage::_secretQuestionFunc(ICustomDataInput &input) {
    this->secretQuestion = input.readUTF();
}

void IdentificationSuccessMessage::_accountCreationFunc(ICustomDataInput &input) {
    this->accountCreation = input.readDouble();

}

void IdentificationSuccessMessage::_subscriptionElapsedDurationFunc(ICustomDataInput &input) {
    this->subscriptionElapsedDuration = input.readDouble();

}

void IdentificationSuccessMessage::_subscriptionEndDateFunc(ICustomDataInput &input) {
    this->subscriptionEndDate = input.readDouble();

}

void IdentificationSuccessMessage::_havenbagAvailableRoomFunc(ICustomDataInput &input) {
    this->havenbagAvailableRoom = input.readUnsignedByte();

}

