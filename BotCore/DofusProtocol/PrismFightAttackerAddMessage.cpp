#include "../ProtocolTypeManager.h"
#include "PrismFightAttackerAddMessage.h"

void PrismFightAttackerAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightAttackerAddMessage(input);
}

void PrismFightAttackerAddMessage::deserializeAs_PrismFightAttackerAddMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    unsigned int _id3 = input.readUnsignedShort();
    this->attacker = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(input, _id3);
}

void PrismFightAttackerAddMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightAttackerAddMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

