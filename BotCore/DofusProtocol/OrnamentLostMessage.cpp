#include "OrnamentLostMessage.h"

void OrnamentLostMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_OrnamentLostMessage(input);
}

void OrnamentLostMessage::deserializeAs_OrnamentLostMessage(ICustomDataInput &input) {
    this->_ornamentIdFunc(input);
}

void OrnamentLostMessage::_ornamentIdFunc(ICustomDataInput &input) {
    this->ornamentId = input.readShort();

}

