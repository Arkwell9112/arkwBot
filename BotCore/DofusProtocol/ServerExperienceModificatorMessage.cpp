#include "ServerExperienceModificatorMessage.h"

void ServerExperienceModificatorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerExperienceModificatorMessage(input);
}

void ServerExperienceModificatorMessage::deserializeAs_ServerExperienceModificatorMessage(ICustomDataInput &input) {
    this->_experiencePercentFunc(input);
}

void ServerExperienceModificatorMessage::_experiencePercentFunc(ICustomDataInput &input) {
    this->experiencePercent = input.readVarUhShort();

}

