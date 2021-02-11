#include "QuestActiveInformations.h"

void QuestActiveInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestActiveInformations(input);
}

void QuestActiveInformations::deserializeAs_QuestActiveInformations(ICustomDataInput &input) {
    this->_questIdFunc(input);
}

void QuestActiveInformations::_questIdFunc(ICustomDataInput &input) {
    this->questId = input.readVarUhShort();

}

