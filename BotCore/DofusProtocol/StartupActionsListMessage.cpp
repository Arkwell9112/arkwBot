#include "StartupActionsListMessage.h"

void StartupActionsListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StartupActionsListMessage(input);
}

void StartupActionsListMessage::deserializeAs_StartupActionsListMessage(ICustomDataInput &input) {
    StartupActionAddObject _item1;
    unsigned int _actionsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _actionsLen; _i1++) {
        _item1.deserialize(input);
        this->actions.push_back(_item1);
    }
}

void StartupActionsListMessage::_actionsFunc(ICustomDataInput &input) {
    StartupActionAddObject _item;
    _item.deserialize(input);
    this->actions.push_back(_item);
}

