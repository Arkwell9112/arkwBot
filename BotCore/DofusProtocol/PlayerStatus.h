#ifndef PLAYERSTATUS
#define PLAYERSTATUS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PlayerStatus : public NetworkInterface {
public:
    unsigned int statusId = 1;
    unsigned int protocolId = 6393;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PlayerStatus(ICustomDataInput &input);

    void _statusIdFunc(ICustomDataInput &input);
};

#endif