#include "../ProtocolTypeManager.h"
#include "FriendsListMessage.h"

void FriendsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendsListMessage(input);
}

void FriendsListMessage::deserializeAs_FriendsListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    FriendInformations _item1;
    unsigned int _friendsListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _friendsListLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<FriendInformations>(input, _id1);
        this->friendsList.push_back(_item1);
    }
}

void FriendsListMessage::_friendsListFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    FriendInformations _item = ProtocolTypeManager::getObject<FriendInformations>(input, _id);
    _item.deserialize(input);
    this->friendsList.push_back(_item);
}

