#include "../ProtocolTypeManager.h"
#include "PartyGuestInformations.h"

void PartyGuestInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyGuestInformations(input);
}

void PartyGuestInformations::deserializeAs_PartyGuestInformations(ICustomDataInput &input) {
    PartyEntityBaseInformation _item8;
    this->_guestIdFunc(input);
    this->_hostIdFunc(input);
    this->_nameFunc(input);
    this->guestLook.deserialize(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    unsigned int _id7 = input.readUnsignedShort();
    this->status = ProtocolTypeManager::getObject<PlayerStatus>(input, _id7);
    unsigned int _entitiesLen = input.readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _entitiesLen; _i8++) {
        _item8.deserialize(input);
        this->entities.push_back(_item8);
    }
}

void PartyGuestInformations::_guestIdFunc(ICustomDataInput &input) {
    this->guestId = input.readVarUhLong();

}

void PartyGuestInformations::_hostIdFunc(ICustomDataInput &input) {
    this->hostId = input.readVarUhLong();

}

void PartyGuestInformations::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void PartyGuestInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

void PartyGuestInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void PartyGuestInformations::_entitiesFunc(ICustomDataInput &input) {
    PartyEntityBaseInformation _item;
    _item.deserialize(input);
    this->entities.push_back(_item);
}

