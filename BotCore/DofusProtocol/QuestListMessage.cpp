#include "../ProtocolTypeManager.h"
#include "QuestListMessage.h"

void QuestListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_QuestListMessage(input);
}

void QuestListMessage::deserializeAs_QuestListMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _id3 = 0;
    QuestActiveInformations _item3;
    unsigned int _val4 = 0;
    unsigned int _finishedQuestsIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _finishedQuestsIdsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->finishedQuestsIds.push_back(_val1);
    }
    unsigned int _finishedQuestsCountsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _finishedQuestsCountsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->finishedQuestsCounts.push_back(_val2);
    }
    unsigned int _activeQuestsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _activeQuestsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<QuestActiveInformations>(input, _id3);
        this->activeQuests.push_back(_item3);
    }
    unsigned int _reinitDoneQuestsIdsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _reinitDoneQuestsIdsLen; _i4++) {
        _val4 = input.readVarUhShort();

        this->reinitDoneQuestsIds.push_back(_val4);
    }
}

void QuestListMessage::_finishedQuestsIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->finishedQuestsIds.push_back(_val);
}

void QuestListMessage::_finishedQuestsCountsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->finishedQuestsCounts.push_back(_val);
}

void QuestListMessage::_activeQuestsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    QuestActiveInformations _item = ProtocolTypeManager::getObject<QuestActiveInformations>(input, _id);
    _item.deserialize(input);
    this->activeQuests.push_back(_item);
}

void QuestListMessage::_reinitDoneQuestsIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->reinitDoneQuestsIds.push_back(_val);
}

