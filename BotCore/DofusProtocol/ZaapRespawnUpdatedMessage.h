#ifndef ZAAPRESPAWNUPDATEDMESSAGE
#define ZAAPRESPAWNUPDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ZaapRespawnUpdatedMessage : public NetworkInterface {
public:
    double mapId = 0;
    unsigned int protocolId = 1952;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ZaapRespawnUpdatedMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);
};

#endif