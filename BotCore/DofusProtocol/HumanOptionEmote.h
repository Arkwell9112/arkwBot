#ifndef HUMANOPTIONEMOTE
#define HUMANOPTIONEMOTE

#include "../IO/ICustomDataInput.h"
#include "HumanOption.h"

class HumanOptionEmote : public HumanOption {
public:
    unsigned int emoteId = 0;
    double emoteStartTime = 0;
    unsigned int protocolId = 5243;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionEmote(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);

    void _emoteStartTimeFunc(ICustomDataInput &input);
};

#endif