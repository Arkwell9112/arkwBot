#include "MapInformationsRequestMessage.h"

void MapInformationsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapInformationsRequestMessage(input);
}

void MapInformationsRequestMessage::deserializeAs_MapInformationsRequestMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
}

void MapInformationsRequestMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

