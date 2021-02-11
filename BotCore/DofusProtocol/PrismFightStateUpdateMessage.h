#ifndef PRISMFIGHTSTATEUPDATEMESSAGE
#define PRISMFIGHTSTATEUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismFightStateUpdateMessage : public NetworkInterface {
public:
    unsigned int state = 0;
    unsigned int protocolId = 7820;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismFightStateUpdateMessage(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);
};

#endif