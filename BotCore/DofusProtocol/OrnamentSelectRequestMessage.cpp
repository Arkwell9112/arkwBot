#include "OrnamentSelectRequestMessage.h"

void OrnamentSelectRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_OrnamentSelectRequestMessage(input);
}

void OrnamentSelectRequestMessage::deserializeAs_OrnamentSelectRequestMessage(ICustomDataInput &input) {
    this->_ornamentIdFunc(input);
}

void OrnamentSelectRequestMessage::_ornamentIdFunc(ICustomDataInput &input) {
    this->ornamentId = input.readVarUhShort();

}

