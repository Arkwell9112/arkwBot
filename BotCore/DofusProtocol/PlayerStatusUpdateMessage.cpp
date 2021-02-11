#include "../ProtocolTypeManager.h"
#include "PlayerStatusUpdateMessage.h"

void PlayerStatusUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PlayerStatusUpdateMessage(input);
}

void PlayerStatusUpdateMessage::deserializeAs_PlayerStatusUpdateMessage(ICustomDataInput &input) {
    this->_accountIdFunc(input);
    this->_playerIdFunc(input);
    unsigned int _id3 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id3);
}

void PlayerStatusUpdateMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void PlayerStatusUpdateMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

