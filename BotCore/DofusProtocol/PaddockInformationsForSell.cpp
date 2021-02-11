#include "PaddockInformationsForSell.h"

void PaddockInformationsForSell::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockInformationsForSell(input);
}

void PaddockInformationsForSell::deserializeAs_PaddockInformationsForSell(ICustomDataInput &input) {
    this->_guildOwnerFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_subAreaIdFunc(input);
    this->_nbMountFunc(input);
    this->_nbObjectFunc(input);
    this->_priceFunc(input);
}

void PaddockInformationsForSell::_guildOwnerFunc(ICustomDataInput &input) {
    this->guildOwner = input.readUTF();
}

void PaddockInformationsForSell::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void PaddockInformationsForSell::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void PaddockInformationsForSell::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void PaddockInformationsForSell::_nbMountFunc(ICustomDataInput &input) {
    this->nbMount = input.readByte();
}

void PaddockInformationsForSell::_nbObjectFunc(ICustomDataInput &input) {
    this->nbObject = input.readByte();
}

void PaddockInformationsForSell::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

