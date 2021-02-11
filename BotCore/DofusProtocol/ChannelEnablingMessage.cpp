#include "ChannelEnablingMessage.h"

void ChannelEnablingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChannelEnablingMessage(input);
}

void ChannelEnablingMessage::deserializeAs_ChannelEnablingMessage(ICustomDataInput &input) {
    this->_channelFunc(input);
    this->_enableFunc(input);
}

void ChannelEnablingMessage::_channelFunc(ICustomDataInput &input) {
    this->channel = input.readByte();

}

void ChannelEnablingMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

