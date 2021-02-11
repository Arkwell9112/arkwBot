#include "ChatAdminServerMessage.h"

void ChatAdminServerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatAdminServerMessage(input);
}

void ChatAdminServerMessage::deserializeAs_ChatAdminServerMessage(ICustomDataInput &input) {
    ChatServerMessage::deserialize(input);
}

