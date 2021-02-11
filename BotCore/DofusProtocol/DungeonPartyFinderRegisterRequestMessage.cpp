#include "DungeonPartyFinderRegisterRequestMessage.h"

void DungeonPartyFinderRegisterRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DungeonPartyFinderRegisterRequestMessage(input);
}

void DungeonPartyFinderRegisterRequestMessage::deserializeAs_DungeonPartyFinderRegisterRequestMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _dungeonIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _dungeonIdsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->dungeonIds.push_back(_val1);
    }
}

void DungeonPartyFinderRegisterRequestMessage::_dungeonIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->dungeonIds.push_back(_val);
}

