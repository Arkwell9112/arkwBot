#include "QuestObjectiveInformationsWithCompletion.h"

void QuestObjectiveInformationsWithCompletion::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestObjectiveInformationsWithCompletion(input);
}

void QuestObjectiveInformationsWithCompletion::deserializeAs_QuestObjectiveInformationsWithCompletion(
        ICustomDataInput &input) {
    QuestObjectiveInformations::deserialize(input);
    this->_curCompletionFunc(input);
    this->_maxCompletionFunc(input);
}

void QuestObjectiveInformationsWithCompletion::_curCompletionFunc(ICustomDataInput &input) {
    this->curCompletion = input.readVarUhShort();

}

void QuestObjectiveInformationsWithCompletion::_maxCompletionFunc(ICustomDataInput &input) {
    this->maxCompletion = input.readVarUhShort();

}

