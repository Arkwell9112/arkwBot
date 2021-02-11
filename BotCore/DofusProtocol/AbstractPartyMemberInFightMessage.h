#ifndef ABSTRACTPARTYMEMBERINFIGHTMESSAGE
#define ABSTRACTPARTYMEMBERINFIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "AbstractPartyMessage.h"

class AbstractPartyMemberInFightMessage : public AbstractPartyMessage {
public:
    unsigned int reason = 0;
    double memberId = 0;
    unsigned int memberAccountId = 0;
    std::string memberName;
    unsigned int fightId = 0;
    int timeBeforeFightStart = 0;
    unsigned int protocolId = 1050;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractPartyMemberInFightMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _memberAccountIdFunc(ICustomDataInput &input);

    void _memberNameFunc(ICustomDataInput &input);

    void _fightIdFunc(ICustomDataInput &input);

    void _timeBeforeFightStartFunc(ICustomDataInput &input);
};

#endif