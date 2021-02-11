#include "ChannelEnablingChangeMessage.h"

void ChannelEnablingChangeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChannelEnablingChangeMessage(input);
}

void ChannelEnablingChangeMessage::deserializeAs_ChannelEnablingChangeMessage(ICustomDataInput &input) {
    this->_channelFunc(input);
    this->_enableFunc(input);
}

void ChannelEnablingChangeMessage::_channelFunc(ICustomDataInput &input) {
    this->channel = input.readByte();

}

void ChannelEnablingChangeMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

