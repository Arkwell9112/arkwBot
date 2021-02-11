#include "NpcDialogReplyMessage.h"

void NpcDialogReplyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NpcDialogReplyMessage(input);
}

void NpcDialogReplyMessage::deserializeAs_NpcDialogReplyMessage(ICustomDataInput &input) {
    this->_replyIdFunc(input);
}

void NpcDialogReplyMessage::_replyIdFunc(ICustomDataInput &input) {
    this->replyId = input.readVarUhInt();

}

