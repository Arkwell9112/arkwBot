#include "../ProtocolTypeManager.h"
#include "AcquaintanceOnlineInformation.h"

void AcquaintanceOnlineInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintanceOnlineInformation(input);
}

void AcquaintanceOnlineInformation::deserializeAs_AcquaintanceOnlineInformation(ICustomDataInput &input) {
    AcquaintanceInformation::deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_moodSmileyIdFunc(input);
    unsigned int _id4 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id4);
}

void AcquaintanceOnlineInformation::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void AcquaintanceOnlineInformation::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void AcquaintanceOnlineInformation::_moodSmileyIdFunc(ICustomDataInput &input) {
    this->moodSmileyId = input.readVarUhShort();

}

