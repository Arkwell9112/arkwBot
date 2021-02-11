#include "ExchangeCraftResultWithObjectIdMessage.h"

void ExchangeCraftResultWithObjectIdMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftResultWithObjectIdMessage(input);
}

void
ExchangeCraftResultWithObjectIdMessage::deserializeAs_ExchangeCraftResultWithObjectIdMessage(ICustomDataInput &input) {
    ExchangeCraftResultMessage::deserialize(input);
    this->_objectGenericIdFunc(input);
}

void ExchangeCraftResultWithObjectIdMessage::_objectGenericIdFunc(ICustomDataInput &input) {
    this->objectGenericId = input.readVarUhShort();

}

