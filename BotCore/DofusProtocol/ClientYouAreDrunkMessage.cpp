#include "ClientYouAreDrunkMessage.h"

void ClientYouAreDrunkMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ClientYouAreDrunkMessage(input);
}

void ClientYouAreDrunkMessage::deserializeAs_ClientYouAreDrunkMessage(ICustomDataInput &input) {
    DebugInClientMessage::deserialize(input);
}

