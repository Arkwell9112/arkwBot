#include "GameActionFightCastRequestMessage.h"

void GameActionFightCastRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightCastRequestMessage(input);
}

void GameActionFightCastRequestMessage::deserializeAs_GameActionFightCastRequestMessage(ICustomDataInput &input) {
    this->_spellIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightCastRequestMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void GameActionFightCastRequestMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

