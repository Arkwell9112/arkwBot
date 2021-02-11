#include "../IO/BooleanByteWrapper.h"
#include "../ProtocolTypeManager.h"
#include "FriendOnlineInformations.h"

void FriendOnlineInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendOnlineInformations(input);
}

void FriendOnlineInformations::deserializeAs_FriendOnlineInformations(ICustomDataInput &input) {
    FriendInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_levelFunc(input);
    this->_alignmentSideFunc(input);
    this->_breedFunc(input);
    this->guildInfo.deserialize(input);
    this->_moodSmileyIdFunc(input);
    unsigned int _id9 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id9);
}

void FriendOnlineInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->havenBagShared = BooleanByteWrapper::getFlag(_box0, 1);
}

void FriendOnlineInformations::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void FriendOnlineInformations::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void FriendOnlineInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void FriendOnlineInformations::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

void FriendOnlineInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();

}

void FriendOnlineInformations::_moodSmileyIdFunc(ICustomDataInput &input) {
    this->moodSmileyId = input.readVarUhShort();

}

