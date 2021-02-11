#include "ExchangeCraftResultMagicWithObjectDescMessage.h"

void ExchangeCraftResultMagicWithObjectDescMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftResultMagicWithObjectDescMessage(input);
}

void ExchangeCraftResultMagicWithObjectDescMessage::deserializeAs_ExchangeCraftResultMagicWithObjectDescMessage(
        ICustomDataInput &input) {
    ExchangeCraftResultWithObjectDescMessage::deserialize(input);
    this->_magicPoolStatusFunc(input);
}

void ExchangeCraftResultMagicWithObjectDescMessage::_magicPoolStatusFunc(ICustomDataInput &input) {
    this->magicPoolStatus = input.readByte();
}

