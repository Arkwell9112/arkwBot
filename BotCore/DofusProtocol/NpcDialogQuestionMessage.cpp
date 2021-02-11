#include "NpcDialogQuestionMessage.h"

void NpcDialogQuestionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_NpcDialogQuestionMessage(input);
}

void NpcDialogQuestionMessage::deserializeAs_NpcDialogQuestionMessage(ICustomDataInput &input) {
    std::string _val2;
    unsigned int _val3 = 0;
    this->_messageIdFunc(input);
    unsigned int _dialogParamsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _dialogParamsLen; _i2++) {
        _val2 = input.readUTF();
        this->dialogParams.push_back(_val2);
    }
    unsigned int _visibleRepliesLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _visibleRepliesLen; _i3++) {
        _val3 = input.readVarUhInt();

        this->visibleReplies.push_back(_val3);
    }
}

void NpcDialogQuestionMessage::_messageIdFunc(ICustomDataInput &input) {
    this->messageId = input.readVarUhInt();

}

void NpcDialogQuestionMessage::_dialogParamsFunc(ICustomDataInput &input) {
    std::string _val = input.readUTF();
    this->dialogParams.push_back(_val);
}

void NpcDialogQuestionMessage::_visibleRepliesFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->visibleReplies.push_back(_val);
}

