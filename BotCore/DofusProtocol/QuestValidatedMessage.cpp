#include "QuestValidatedMessage.h"

void QuestValidatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestValidatedMessage(input);
}

void QuestValidatedMessage::deserializeAs_QuestValidatedMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
}

void QuestValidatedMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

