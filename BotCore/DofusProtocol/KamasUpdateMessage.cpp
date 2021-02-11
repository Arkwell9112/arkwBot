#include "KamasUpdateMessage.h"

void KamasUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_KamasUpdateMessage(input);
}

void KamasUpdateMessage::deserializeAs_KamasUpdateMessage(ICustomDataInput &input) {
    this->_kamasTotalFunc(input);
}

void KamasUpdateMessage::_kamasTotalFunc(ICustomDataInput &input) {
    this->kamasTotal = input.readVarUhLong();

}

