#include "StartupActionAddMessage.h"

void StartupActionAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StartupActionAddMessage(input);
}

void StartupActionAddMessage::deserializeAs_StartupActionAddMessage(ICustomDataInput &input) {
    this->newAction.deserialize(input);
}

