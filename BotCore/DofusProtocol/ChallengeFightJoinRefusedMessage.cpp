#include "ChallengeFightJoinRefusedMessage.h"

void ChallengeFightJoinRefusedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChallengeFightJoinRefusedMessage(input);
}

void ChallengeFightJoinRefusedMessage::deserializeAs_ChallengeFightJoinRefusedMessage(ICustomDataInput &input) {
    this->_playerIdFunc(input);
    this->_reasonFunc(input);
}

void ChallengeFightJoinRefusedMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void ChallengeFightJoinRefusedMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();
}

