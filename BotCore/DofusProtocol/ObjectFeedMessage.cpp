#include "ObjectFeedMessage.h"

void ObjectFeedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectFeedMessage(input);
}

void ObjectFeedMessage::deserializeAs_ObjectFeedMessage(ICustomDataInput &input) {
    ObjectItemQuantity _item2;
    this->_objectUIDFunc(input);
    unsigned int _mealLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _mealLen; _i2++) {
        _item2.deserialize(input);
        this->meal.push_back(_item2);
    }
}

void ObjectFeedMessage::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectFeedMessage::_mealFunc(ICustomDataInput &input) {
    ObjectItemQuantity _item;
    _item.deserialize(input);
    this->meal.push_back(_item);
}

