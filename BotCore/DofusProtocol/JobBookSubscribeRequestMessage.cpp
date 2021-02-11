#include "JobBookSubscribeRequestMessage.h"

void JobBookSubscribeRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_JobBookSubscribeRequestMessage(input);
}

void JobBookSubscribeRequestMessage::deserializeAs_JobBookSubscribeRequestMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _jobIdsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _jobIdsLen; _i1++) {
        _val1 = input.readByte();

        this->jobIds.push_back(_val1);
    }
}

void JobBookSubscribeRequestMessage::_jobIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readByte();

    this->jobIds.push_back(_val);
}

