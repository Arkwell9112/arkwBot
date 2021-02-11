#include "HouseInformationsForGuild.h"

void HouseInformationsForGuild::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseInformationsForGuild(input);
}

void HouseInformationsForGuild::deserializeAs_HouseInformationsForGuild(ICustomDataInput &input) {
    int _val8 = 0;
    HouseInformations::deserialize(input);
    this->_instanceIdFunc(input);
    this->_secondHandFunc(input);
    this->_ownerNameFunc(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_mapIdFunc(input);
    this->_subAreaIdFunc(input);
    unsigned int _skillListIdsLen = input.readUnsignedShort();
    for (unsigned int _i8 = 0; _i8 < _skillListIdsLen; _i8++) {
        _val8 = input.readInt();
        this->skillListIds.push_back(_val8);
    }
    this->_guildshareParamsFunc(input);
}

void HouseInformationsForGuild::_instanceIdFunc(ICustomDataInput &input) {
    this->instanceId = input.readInt();

}

void HouseInformationsForGuild::_secondHandFunc(ICustomDataInput &input) {
    this->secondHand = input.readBoolean();
}

void HouseInformationsForGuild::_ownerNameFunc(ICustomDataInput &input) {
    this->ownerName = input.readUTF();
}

void HouseInformationsForGuild::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void HouseInformationsForGuild::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void HouseInformationsForGuild::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

void HouseInformationsForGuild::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void HouseInformationsForGuild::_skillListIdsFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->skillListIds.push_back(_val);
}

void HouseInformationsForGuild::_guildshareParamsFunc(ICustomDataInput &input) {
    this->guildshareParams = input.readVarUhInt();

}

