#include "ErrorMapNotFoundMessage.h"

void ErrorMapNotFoundMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ErrorMapNotFoundMessage(input);
}

void ErrorMapNotFoundMessage::deserializeAs_ErrorMapNotFoundMessage(ICustomDataInput &input) {
    this->_mapIdFunc(input);
}

void ErrorMapNotFoundMessage::_mapIdFunc(ICustomDataInput &input) {
    this->mapId = input.readDouble();

}

