#include "TreasureHuntLegendaryRequestMessage.h"

void TreasureHuntLegendaryRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntLegendaryRequestMessage(input);
}

void TreasureHuntLegendaryRequestMessage::deserializeAs_TreasureHuntLegendaryRequestMessage(ICustomDataInput &input) {
    this->_legendaryIdFunc(input);
}

void TreasureHuntLegendaryRequestMessage::_legendaryIdFunc(ICustomDataInput &input) {
    this->legendaryId = input.readVarUhShort();

}

