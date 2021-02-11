#include "HavenBagDailyLoteryMessage.h"

void HavenBagDailyLoteryMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagDailyLoteryMessage(input);
}

void HavenBagDailyLoteryMessage::deserializeAs_HavenBagDailyLoteryMessage(ICustomDataInput &input) {
    this->_returnTypeFunc(input);
    this->_gameActionIdFunc(input);
}

void HavenBagDailyLoteryMessage::_returnTypeFunc(ICustomDataInput &input) {
    this->returnType = input.readByte();

}

void HavenBagDailyLoteryMessage::_gameActionIdFunc(ICustomDataInput &input) {
    this->gameActionId = input.readUTF();
}

