#include "EnabledChannelsMessage.h"

void EnabledChannelsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EnabledChannelsMessage(input);
}

void EnabledChannelsMessage::deserializeAs_EnabledChannelsMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _channelsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _channelsLen; _i1++) {
        _val1 = input.readByte();

        this->channels.push_back(_val1);
    }
    unsigned int _disallowedLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _disallowedLen; _i2++) {
        _val2 = input.readByte();

        this->disallowed.push_back(_val2);
    }
}

void EnabledChannelsMessage::_channelsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->channels.push_back(_val);
}

void EnabledChannelsMessage::_disallowedFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->disallowed.push_back(_val);
}

