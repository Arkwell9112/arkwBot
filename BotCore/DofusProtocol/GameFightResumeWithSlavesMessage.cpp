#include "GameFightResumeWithSlavesMessage.h"

void GameFightResumeWithSlavesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightResumeWithSlavesMessage(input);
}

void GameFightResumeWithSlavesMessage::deserializeAs_GameFightResumeWithSlavesMessage(ICustomDataInput &input) {
    GameFightResumeSlaveInfo _item1;
    GameFightResumeMessage::deserialize(input);
    unsigned int _slavesInfoLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _slavesInfoLen; _i1++) {
        _item1.deserialize(input);
        this->slavesInfo.push_back(_item1);
    }
}

void GameFightResumeWithSlavesMessage::_slavesInfoFunc(ICustomDataInput &input) {
    GameFightResumeSlaveInfo _item;
    _item.deserialize(input);
    this->slavesInfo.push_back(_item);
}

