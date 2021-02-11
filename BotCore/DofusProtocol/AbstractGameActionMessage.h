#ifndef ABSTRACTGAMEACTIONMESSAGE
#define ABSTRACTGAMEACTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AbstractGameActionMessage : public NetworkInterface {
public:
    unsigned int actionId = 0;
    double sourceId = 0;
    unsigned int protocolId = 4746;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractGameActionMessage(ICustomDataInput &input);

    void _actionIdFunc(ICustomDataInput &input);

    void _sourceIdFunc(ICustomDataInput &input);
};

#endif