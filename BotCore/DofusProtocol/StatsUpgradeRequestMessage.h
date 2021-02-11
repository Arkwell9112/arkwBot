#ifndef STATSUPGRADEREQUESTMESSAGE
#define STATSUPGRADEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StatsUpgradeRequestMessage : public NetworkInterface {
public:
    bool useAdditionnal = false;
    unsigned int statId = 11;
    unsigned int boostPoint = 0;
    unsigned int protocolId = 4902;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatsUpgradeRequestMessage(ICustomDataInput &input);

    void _useAdditionnalFunc(ICustomDataInput &input);

    void _statIdFunc(ICustomDataInput &input);

    void _boostPointFunc(ICustomDataInput &input);
};

#endif