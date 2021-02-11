#include "../ProtocolTypeManager.h"
#include "QuestActiveDetailedInformations.h"

void QuestActiveDetailedInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestActiveDetailedInformations(input);
}

void QuestActiveDetailedInformations::deserializeAs_QuestActiveDetailedInformations(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    QuestObjectiveInformations _item2;
    QuestActiveInformations::deserialize(input);
    this->_stepIdFunc(input);
    unsigned int _objectivesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _objectivesLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<QuestObjectiveInformations>(input, _id2);
        this->objectives.push_back(_item2);
    }
}

void QuestActiveDetailedInformations::_stepIdFunc(ICustomDataInput &input) {
    this->stepId = input.readVarUhShort();

}

void QuestActiveDetailedInformations::_objectivesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    QuestObjectiveInformations _item = ProtocolTypeManager::getObject<QuestObjectiveInformations>(input, _id);
    _item.deserialize(input);
    this->objectives.push_back(_item);
}

