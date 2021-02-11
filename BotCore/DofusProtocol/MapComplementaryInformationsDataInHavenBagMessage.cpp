#include "MapComplementaryInformationsDataInHavenBagMessage.h"

void MapComplementaryInformationsDataInHavenBagMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapComplementaryInformationsDataInHavenBagMessage(input);
}

void MapComplementaryInformationsDataInHavenBagMessage::deserializeAs_MapComplementaryInformationsDataInHavenBagMessage(
        ICustomDataInput &input) {
    MapComplementaryInformationsDataMessage::deserialize(input);
    this->ownerInformations.deserialize(input);
    this->_themeFunc(input);
    this->_roomIdFunc(input);
    this->_maxRoomIdFunc(input);
}

void MapComplementaryInformationsDataInHavenBagMessage::_themeFunc(ICustomDataInput &input) {
    this->theme = input.readByte();
}

void MapComplementaryInformationsDataInHavenBagMessage::_roomIdFunc(ICustomDataInput &input) {
    this->roomId = input.readByte();

}

void MapComplementaryInformationsDataInHavenBagMessage::_maxRoomIdFunc(ICustomDataInput &input) {
    this->maxRoomId = input.readByte();

}

