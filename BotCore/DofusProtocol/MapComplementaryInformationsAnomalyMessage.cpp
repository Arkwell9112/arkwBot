#include "MapComplementaryInformationsAnomalyMessage.h"

void MapComplementaryInformationsAnomalyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapComplementaryInformationsAnomalyMessage(input);
}

void MapComplementaryInformationsAnomalyMessage::deserializeAs_MapComplementaryInformationsAnomalyMessage(
        ICustomDataInput &input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->_levelFunc(input);
    this->_closingTimeFunc(input);
}

void MapComplementaryInformationsAnomalyMessage::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void MapComplementaryInformationsAnomalyMessage::_closingTimeFunc(ICustomDataInput &input) {
    this->closingTime = input.readVarUhLong();

}

