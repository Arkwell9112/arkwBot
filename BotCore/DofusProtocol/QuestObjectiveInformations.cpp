#include "QuestObjectiveInformations.h"

void QuestObjectiveInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestObjectiveInformations(input);
}

void QuestObjectiveInformations::deserializeAs_QuestObjectiveInformations(ICustomDataInput &input) {
    std::string _val3;
    this->_objectiveIdFunc(input);
    this->_objectiveStatusFunc(input);
    unsigned int _dialogParamsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _dialogParamsLen; _i3++) {
        _val3 = input.readUTF();
        this->dialogParams.push_back(_val3);
    }
}

void QuestObjectiveInformations::_objectiveIdFunc(ICustomDataInput &input) {
    this->objectiveId = input.readVarUhShort();

}

void QuestObjectiveInformations::_objectiveStatusFunc(ICustomDataInput &input) {
    this->objectiveStatus = input.readBoolean();
}

void QuestObjectiveInformations::_dialogParamsFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->dialogParams.push_back(_val);
}

