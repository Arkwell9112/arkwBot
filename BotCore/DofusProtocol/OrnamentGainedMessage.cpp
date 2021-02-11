#include "OrnamentGainedMessage.h"

void OrnamentGainedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_OrnamentGainedMessage(input);
}

void OrnamentGainedMessage::deserializeAs_OrnamentGainedMessage(ICustomDataInput &input) {
    this->_ornamentIdFunc(input);
}

void OrnamentGainedMessage::_ornamentIdFunc(ICustomDataInput &input) {
    this->ornamentId = input.readShort();

}

