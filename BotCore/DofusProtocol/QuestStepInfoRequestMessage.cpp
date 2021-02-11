#include "QuestStepInfoRequestMessage.h"

void QuestStepInfoRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestStepInfoRequestMessage(input);
}

void QuestStepInfoRequestMessage::deserializeAs_QuestStepInfoRequestMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
}

void QuestStepInfoRequestMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

