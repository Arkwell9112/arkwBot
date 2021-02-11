#include "MapComplementaryInformationsDataInHouseMessage.h"

void MapComplementaryInformationsDataInHouseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapComplementaryInformationsDataInHouseMessage(input);
}

void MapComplementaryInformationsDataInHouseMessage::deserializeAs_MapComplementaryInformationsDataInHouseMessage(
        ICustomDataInput &input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->currentHouse.deserialize(input);
}

