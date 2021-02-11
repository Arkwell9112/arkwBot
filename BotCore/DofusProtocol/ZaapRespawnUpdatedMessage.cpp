#include "ZaapRespawnUpdatedMessage.h"

void ZaapRespawnUpdatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ZaapRespawnUpdatedMessage(input);
}

void ZaapRespawnUpdatedMessage::deserializeAs_ZaapRespawnUpdatedMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
}

void ZaapRespawnUpdatedMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

