#include "../IO/BooleanByteWrapper.h"
#include "PartyFollowStatusUpdateMessage.h"

void PartyFollowStatusUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyFollowStatusUpdateMessage(input);
}

void PartyFollowStatusUpdateMessage::deserializeAs_PartyFollowStatusUpdateMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_followedIdFunc(input);
}

void PartyFollowStatusUpdateMessage::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->success = BooleanByteWrapper::getFlag(_box0, 0);
    this->isFollowed = BooleanByteWrapper::getFlag(_box0, 1);
}

void PartyFollowStatusUpdateMessage::_followedIdFunc(ICustomDataInput &input) {
    this->followedId = input.readVarUhLong();

}

