#include "../ProtocolTypeManager.h"
#include "MapComplementaryInformationsBreachMessage.h"

void MapComplementaryInformationsBreachMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapComplementaryInformationsBreachMessage(input);
}

void MapComplementaryInformationsBreachMessage::deserializeAs_MapComplementaryInformationsBreachMessage(
        ICustomDataInput &input) {
    unsigned int _id4 = 0;
    BreachBranch _item4;
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->_floorFunc(input);
    this->_roomFunc(input);
    this->_infinityModeFunc(input);
    unsigned int _branchesLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _branchesLen; _i4++) {
        _id4 = input.readUnsignedShort();
        _item4 = ProtocolTypeManager::getObject<BreachBranch>(input, _id4);
        this->branches.push_back(_item4);
    }
}

void MapComplementaryInformationsBreachMessage::_floorFunc(ICustomDataInput &input) {
    this->floor = input.readVarUhInt();

}

void MapComplementaryInformationsBreachMessage::_roomFunc(ICustomDataInput &input) {
    this->room = input.readByte();

}

void MapComplementaryInformationsBreachMessage::_infinityModeFunc(ICustomDataInput &input) {
    this->infinityMode = input.readShort();

}

void MapComplementaryInformationsBreachMessage::_branchesFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    BreachBranch _item = ProtocolTypeManager::getObject<BreachBranch>(input, _id);
    _item.deserialize(input);
    this->branches.push_back(_item);
}

