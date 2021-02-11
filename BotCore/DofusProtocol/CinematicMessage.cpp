#include "CinematicMessage.h"

void CinematicMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CinematicMessage(input);
}

void CinematicMessage::deserializeAs_CinematicMessage(ICustomDataInput &input) {
    this->_cinematicIdFunc(input);
}

void CinematicMessage::_cinematicIdFunc(ICustomDataInput &input) {
    this->cinematicId = input.readVarUhShort();

}

