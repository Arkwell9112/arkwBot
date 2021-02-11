#include "HaapiBufferListMessage.h"

void HaapiBufferListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HaapiBufferListMessage(input);
}

void HaapiBufferListMessage::deserializeAs_HaapiBufferListMessage(ICustomDataInput &input) {
    BufferInformation _item1;
    unsigned int _buffersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _buffersLen; _i1++) {
        _item1.deserialize(input);
        this->buffers.push_back(_item1);
    }
}

void HaapiBufferListMessage::_buffersFunc(ICustomDataInput &input) {
    BufferInformation _item;
    _item.deserialize(input);
    this->buffers.push_back(_item);
}

