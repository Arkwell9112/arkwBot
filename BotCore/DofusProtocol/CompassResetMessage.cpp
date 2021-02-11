#include "CompassResetMessage.h"

void CompassResetMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CompassResetMessage(input);
}

void CompassResetMessage::deserializeAs_CompassResetMessage(ICustomDataInput &input) {
    this->_typeFunc(input);
}

void CompassResetMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

