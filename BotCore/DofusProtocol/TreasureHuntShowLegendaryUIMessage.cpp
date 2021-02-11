#include "TreasureHuntShowLegendaryUIMessage.h"

void TreasureHuntShowLegendaryUIMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntShowLegendaryUIMessage(input);
}

void TreasureHuntShowLegendaryUIMessage::deserializeAs_TreasureHuntShowLegendaryUIMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _availableLegendaryIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _availableLegendaryIdsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->availableLegendaryIds.push_back(_val1);
    }
}

void TreasureHuntShowLegendaryUIMessage::_availableLegendaryIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->availableLegendaryIds.push_back(_val);
}

