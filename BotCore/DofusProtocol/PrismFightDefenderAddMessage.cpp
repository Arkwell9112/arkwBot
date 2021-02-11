#include "../ProtocolTypeManager.h"
#include "PrismFightDefenderAddMessage.h"

void PrismFightDefenderAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismFightDefenderAddMessage(input);
}

void PrismFightDefenderAddMessage::deserializeAs_PrismFightDefenderAddMessage(ICustomDataInput &input) {
    this->_subAreaIdFunc(input);
    this->_fightIdFunc(input);
    unsigned int _id3 = input.readUnsignedShort();
    this->defender = ProtocolTypeManager::getObject<CharacterMinimalPlusLookInformations>(input, _id3);
}

void PrismFightDefenderAddMessage::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PrismFightDefenderAddMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

