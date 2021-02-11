#include "QuestStartRequestMessage.h"

void QuestStartRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestStartRequestMessage(input);
}

void QuestStartRequestMessage::deserializeAs_QuestStartRequestMessage(ICustomDataInput &input) {
    this->_questIdFunc(input);
}

void QuestStartRequestMessage::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

