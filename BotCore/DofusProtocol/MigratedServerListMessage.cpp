#include "MigratedServerListMessage.h"

void MigratedServerListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MigratedServerListMessage(input);
}

void MigratedServerListMessage::deserializeAs_MigratedServerListMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _migratedServerIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _migratedServerIdsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->migratedServerIds.push_back(_val1);
    }
}

void MigratedServerListMessage::_migratedServerIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->migratedServerIds.push_back(_val);
}

