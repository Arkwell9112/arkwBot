#include "AchievementFinishedInformationMessage.h"

void AchievementFinishedInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementFinishedInformationMessage(input);
}

void
AchievementFinishedInformationMessage::deserializeAs_AchievementFinishedInformationMessage(ICustomDataInput &input) {
    AchievementFinishedMessage::deserialize(input);
    this->_nameFunc(input);
    this->_playerIdFunc(input);
}

void AchievementFinishedInformationMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void AchievementFinishedInformationMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

