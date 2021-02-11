#include "ExchangeStartOkJobIndexMessage.h"

void ExchangeStartOkJobIndexMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkJobIndexMessage(input);
}

void ExchangeStartOkJobIndexMessage::deserializeAs_ExchangeStartOkJobIndexMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _jobsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _jobsLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->jobs.push_back(_val1);
    }
}

void ExchangeStartOkJobIndexMessage::_jobsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->jobs.push_back(_val);
}

