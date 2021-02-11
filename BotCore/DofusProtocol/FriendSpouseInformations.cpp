#include "FriendSpouseInformations.h"

void FriendSpouseInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendSpouseInformations(input);
}

void FriendSpouseInformations::deserializeAs_FriendSpouseInformations(ICustomDataInput &input) {
    this->_spouseAccountIdFunc(input);
    this->_spouseIdFunc(input);
    this->_spouseNameFunc(input);
    this->_spouseLevelFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->spouseEntityLook.deserialize(input);
    this->guildInfo.deserialize(input);
    this->_alignmentSideFunc(input);
}

void FriendSpouseInformations::_spouseAccountIdFunc(ICustomDataInput &input) {
    this->spouseAccountId = input.readInt();

}

void FriendSpouseInformations::_spouseIdFunc(ICustomDataInput &input) {
    this->spouseId = input.readVarUhLong();

}

void FriendSpouseInformations::_spouseNameFunc(ICustomDataInput &input) {
    this->spouseName = input.readUTF();
}

void FriendSpouseInformations::_spouseLevelFunc(ICustomDataInput &input) {
    this->spouseLevel = input.readVarUhShort();

}

void FriendSpouseInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

void FriendSpouseInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readByte();
}

void FriendSpouseInformations::_alignmentSideFunc(ICustomDataInput &input) {
    this->alignmentSide = input.readByte();
}

