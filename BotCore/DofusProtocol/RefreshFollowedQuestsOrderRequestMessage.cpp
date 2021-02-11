#include "RefreshFollowedQuestsOrderRequestMessage.h"

void RefreshFollowedQuestsOrderRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_RefreshFollowedQuestsOrderRequestMessage(input);
}

void RefreshFollowedQuestsOrderRequestMessage::deserializeAs_RefreshFollowedQuestsOrderRequestMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _questsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _questsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->quests.push_back(_val1);
    }
}

void RefreshFollowedQuestsOrderRequestMessage::_questsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->quests.push_back(_val);
}

