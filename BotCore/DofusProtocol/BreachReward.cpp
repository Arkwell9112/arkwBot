#include "BreachReward.h"

void BreachReward::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachReward(input);
}

void BreachReward::deserializeAs_BreachReward(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    this->_idFunc(input);
    unsigned int _buyLocksLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _buyLocksLen; _i2++) {
        _val2 = input.readByte();

        this->buyLocks.push_back(_val2);
    }
    this->_buyCriterionFunc(input);
    this->_remainingQtyFunc(input);
    this->_priceFunc(input);
}

void BreachReward::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhInt();

}

void BreachReward::_buyLocksFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->buyLocks.push_back(_val);
}

void BreachReward::_buyCriterionFunc(ICustomDataInput &input) {
    this->buyCriterion = input.readUTF();
}

void BreachReward::_remainingQtyFunc(ICustomDataInput &input) {
    this->remainingQty = input.readVarInt();
}

void BreachReward::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhInt();

}

