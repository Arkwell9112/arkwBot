#include "../ProtocolTypeManager.h"
#include "QuestStepInfoMessage.h"

void QuestStepInfoMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestStepInfoMessage(input);
}

void QuestStepInfoMessage::deserializeAs_QuestStepInfoMessage(ICustomDataInput &input) {
    unsigned int _id1 = input.readUnsignedShort();
    this->infos = ProtocolTypeManager::getObject<QuestActiveInformations>(input, _id1);
}

