#include "../IO/BooleanByteWrapper.h"
#include "FriendSpouseOnlineInformations.h"

void FriendSpouseOnlineInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendSpouseOnlineInformations(input);
}

void FriendSpouseOnlineInformations::deserializeAs_FriendSpouseOnlineInformations(ICustomDataInput &input) {
    FriendSpouseInformations::deserialize(input);
    this->deserializeByteBoxes(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
}

void FriendSpouseOnlineInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->inFight = BooleanByteWrapper::getFlag(_box0, 0);
    this->followSpouse = BooleanByteWrapper::getFlag(_box0, 1);
}

void FriendSpouseOnlineInformations::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void FriendSpouseOnlineInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

