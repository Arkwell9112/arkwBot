#include "MoodSmileyUpdateMessage.h"

void MoodSmileyUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MoodSmileyUpdateMessage(input);
}

void MoodSmileyUpdateMessage::deserializeAs_MoodSmileyUpdateMessage(ICustomDataInput &input) {
    this->_accountIdFunc(input);
    this->_playerIdFunc(input);
    this->_smileyIdFunc(input);
}

void MoodSmileyUpdateMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void MoodSmileyUpdateMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void MoodSmileyUpdateMessage::_smileyIdFunc(ICustomDataInput &input) {
    this->smileyId = input.readVarUhShort();

}

