#include "JobExperienceOtherPlayerUpdateMessage.h"

void JobExperienceOtherPlayerUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobExperienceOtherPlayerUpdateMessage(input);
}

void
JobExperienceOtherPlayerUpdateMessage::deserializeAs_JobExperienceOtherPlayerUpdateMessage(ICustomDataInput &input) {
    JobExperienceUpdateMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void JobExperienceOtherPlayerUpdateMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

