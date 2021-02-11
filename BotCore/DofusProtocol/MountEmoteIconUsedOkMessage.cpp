#include "MountEmoteIconUsedOkMessage.h"

void MountEmoteIconUsedOkMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountEmoteIconUsedOkMessage(input);
}

void MountEmoteIconUsedOkMessage::deserializeAs_MountEmoteIconUsedOkMessage(ICustomDataInput &input) {
    this->_mountIdFunc(input);
    this->_reactionTypeFunc(input);
}

void MountEmoteIconUsedOkMessage::_mountIdFunc(ICustomDataInput &input) {
    this->mountId = input.readVarInt();
}

void MountEmoteIconUsedOkMessage::_reactionTypeFunc(ICustomDataInput &input) {
    this->reactionType = input.readByte();

}

