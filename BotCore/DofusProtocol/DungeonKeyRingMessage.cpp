#include "DungeonKeyRingMessage.h"

void DungeonKeyRingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonKeyRingMessage(input);
}

void DungeonKeyRingMessage::deserializeAs_DungeonKeyRingMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _availablesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _availablesLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->availables.push_back(_val1);
    }
    unsigned int _unavailablesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _unavailablesLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->unavailables.push_back(_val2);
    }
}

void DungeonKeyRingMessage::_availablesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->availables.push_back(_val);
}

void DungeonKeyRingMessage::_unavailablesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->unavailables.push_back(_val);
}

