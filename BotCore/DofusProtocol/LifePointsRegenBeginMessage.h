#ifndef LIFEPOINTSREGENBEGINMESSAGE
#define LIFEPOINTSREGENBEGINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class LifePointsRegenBeginMessage : public NetworkInterface {
public:
    unsigned int regenRate = 0;
    unsigned int protocolId = 9575;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_LifePointsRegenBeginMessage(ICustomDataInput &input);

    void _regenRateFunc(ICustomDataInput &input);
};

#endif