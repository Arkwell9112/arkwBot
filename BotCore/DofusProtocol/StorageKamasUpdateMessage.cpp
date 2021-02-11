#include "StorageKamasUpdateMessage.h"

void StorageKamasUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StorageKamasUpdateMessage(input);
}

void StorageKamasUpdateMessage::deserializeAs_StorageKamasUpdateMessage(ICustomDataInput &input) {
    this->_kamasTotalFunc(input);
}

void StorageKamasUpdateMessage::_kamasTotalFunc(ICustomDataInput &input) {
    this->kamasTotal = input.readVarUhLong();

}

