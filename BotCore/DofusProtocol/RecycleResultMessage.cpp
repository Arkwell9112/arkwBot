#include "RecycleResultMessage.h"

void RecycleResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_RecycleResultMessage(input);
}

void RecycleResultMessage::deserializeAs_RecycleResultMessage(ICustomDataInput &input) {
    this->_nuggetsForPrismFunc(input);
    this->_nuggetsForPlayerFunc(input);
}

void RecycleResultMessage::_nuggetsForPrismFunc(ICustomDataInput &input) {
    this->nuggetsForPrism = input.readVarUhInt();

}

void RecycleResultMessage::_nuggetsForPlayerFunc(ICustomDataInput &input) {
    this->nuggetsForPlayer = input.readVarUhInt();

}

