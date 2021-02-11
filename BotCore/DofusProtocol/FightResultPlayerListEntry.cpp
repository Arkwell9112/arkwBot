#include "../ProtocolTypeManager.h"
#include "FightResultPlayerListEntry.h"

void FightResultPlayerListEntry::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightResultPlayerListEntry(input);
}

void FightResultPlayerListEntry::deserializeAs_FightResultPlayerListEntry(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    FightResultAdditionalData _item2;
    FightResultFighterListEntry::deserialize(input);
    this->_levelFunc(input);
    unsigned int _additionalLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _additionalLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<FightResultAdditionalData>(input, _id2);
        this->additional.push_back(_item2);
    }
}

void FightResultPlayerListEntry::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void FightResultPlayerListEntry::_additionalFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    FightResultAdditionalData _item = ProtocolTypeManager::getObject<FightResultAdditionalData>(input, _id);
    _item.deserialize(input);
    this->additional.push_back(_item);
}

