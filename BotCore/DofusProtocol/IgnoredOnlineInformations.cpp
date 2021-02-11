#include "IgnoredOnlineInformations.h"

void IgnoredOnlineInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredOnlineInformations(input);
}

void IgnoredOnlineInformations::deserializeAs_IgnoredOnlineInformations(ICustomDataInput &input) {
    IgnoredInformations::deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
}

void IgnoredOnlineInformations::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void IgnoredOnlineInformations::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void IgnoredOnlineInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();

}

void IgnoredOnlineInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

