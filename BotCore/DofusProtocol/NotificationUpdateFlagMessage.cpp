#include "NotificationUpdateFlagMessage.h"

void NotificationUpdateFlagMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NotificationUpdateFlagMessage(input);
}

void NotificationUpdateFlagMessage::deserializeAs_NotificationUpdateFlagMessage(ICustomDataInput &input) {
    this->_indexFunc(input);
}

void NotificationUpdateFlagMessage::_indexFunc(ICustomDataInput &input) {
    this->index = input.readVarUhShort();

}

