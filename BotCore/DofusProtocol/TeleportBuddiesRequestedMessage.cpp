#include "TeleportBuddiesRequestedMessage.h"

void TeleportBuddiesRequestedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TeleportBuddiesRequestedMessage(input);
}

void TeleportBuddiesRequestedMessage::deserializeAs_TeleportBuddiesRequestedMessage(ICustomDataInput &input) {
    double _val3 = 0;
    this->_dungeonIdFunc(input);
    this->_inviterIdFunc(input);
    unsigned int _invalidBuddiesIdsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _invalidBuddiesIdsLen; _i3++) {
        _val3 = input.readVarUhLong();

        this->invalidBuddiesIds.push_back(_val3);
    }
}

void TeleportBuddiesRequestedMessage::_dungeonIdFunc(ICustomDataInput &input) {
    this->dungeonId = input.readVarUhShort();

}

void TeleportBuddiesRequestedMessage::_inviterIdFunc(ICustomDataInput &input) {
    this->inviterId = input.readVarUhLong();

}

void TeleportBuddiesRequestedMessage::_invalidBuddiesIdsFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->invalidBuddiesIds.push_back(_val);
}

