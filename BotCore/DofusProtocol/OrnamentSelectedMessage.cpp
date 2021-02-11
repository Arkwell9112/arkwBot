#include "OrnamentSelectedMessage.h"

void OrnamentSelectedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_OrnamentSelectedMessage(input);
}

void OrnamentSelectedMessage::deserializeAs_OrnamentSelectedMessage(ICustomDataInput &input) {
    this->_ornamentIdFunc(input);
}

void OrnamentSelectedMessage::_ornamentIdFunc(ICustomDataInput &input) {
    this->ornamentId = input.readVarUhShort();

}

