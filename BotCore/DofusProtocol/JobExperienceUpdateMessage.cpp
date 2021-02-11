#include "JobExperienceUpdateMessage.h"

void JobExperienceUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobExperienceUpdateMessage(input);
}

void JobExperienceUpdateMessage::deserializeAs_JobExperienceUpdateMessage(ICustomDataInput &input) {
    this->experiencesUpdate.deserialize(input);
}

