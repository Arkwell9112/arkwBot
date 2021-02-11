#include "FightLoot.h"

void FightLoot::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightLoot(input);
}

void FightLoot::deserializeAs_FightLoot(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _objectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->objects.push_back(_val1);
    }
    this->_kamasFunc(input);
}

void FightLoot::_objectsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->objects.push_back(_val);
}

void FightLoot::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

