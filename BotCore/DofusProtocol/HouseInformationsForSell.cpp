#include "HouseInformationsForSell.h"

void HouseInformationsForSell::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseInformationsForSell(input);
}

void HouseInformationsForSell::deserializeAs_HouseInformationsForSell(ICustomDataInput &input) {
    int _val11 = 0;
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->_modelIdFunc(input);
    this->_ownerNameFunc(input);
    this->_ownerCharacterNameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_subAreaIdFunc(input);
    this->_nbRoomFunc(input);
    this->_nbChestFunc(input);
    unsigned int _skillListIdsLen = input.readUnsignedShort();
    for (unsigned int _i11 = 0; _i11 < _skillListIdsLen; _i11++) {
        _val11 = input.readInt();
        this->skillListIds.push_back(_val11);
    }
    this->_isLockedFunc(input);
    this->_priceFunc(input);
}

void HouseInformationsForSell::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseInformationsForSell::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

void HouseInformationsForSell::_modelIdFunc(ICustomDataInput &input) {
    this->modelId = input.readVarUhInt();

}

void HouseInformationsForSell::_ownerNameFunc(ICustomDataInput &input) {
    this->ownerName = input.readUTF();
}

void HouseInformationsForSell::_ownerCharacterNameFunc(ICustomDataInput &input) {
    this->ownerCharacterName = input.readUTF();
}

void HouseInformationsForSell::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void HouseInformationsForSell::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void HouseInformationsForSell::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void HouseInformationsForSell::_nbRoomFunc(ICustomDataInput &input) {
    this->nbRoom = input.readByte();
}

void HouseInformationsForSell::_nbChestFunc(ICustomDataInput &input) {
    this->nbChest = input.readByte();
}

void HouseInformationsForSell::_skillListIdsFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->skillListIds.push_back(_val);
}

void HouseInformationsForSell::_isLockedFunc(ICustomDataInput &input) {
    this->isLocked = input.readBoolean();
}

void HouseInformationsForSell::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

