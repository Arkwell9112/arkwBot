#include "AreaFightModificatorUpdateMessage.h"

void AreaFightModificatorUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AreaFightModificatorUpdateMessage(input);
}

void AreaFightModificatorUpdateMessage::deserializeAs_AreaFightModificatorUpdateMessage(ICustomDataInput &input) {
    this->_spellPairIdFunc(input);
}

void AreaFightModificatorUpdateMessage::_spellPairIdFunc(ICustomDataInput &input) {
    this->spellPairId = input.readInt();
}

