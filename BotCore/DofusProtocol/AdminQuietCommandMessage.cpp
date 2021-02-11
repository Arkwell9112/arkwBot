#include "AdminQuietCommandMessage.h"

void AdminQuietCommandMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AdminQuietCommandMessage(input);
}

void AdminQuietCommandMessage::deserializeAs_AdminQuietCommandMessage(ICustomDataInput &input) {
    AdminCommandMessage::deserialize(input);
}

