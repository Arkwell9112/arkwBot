#ifndef OBJECTAVERAGEPRICESGETMESSAGE
#define OBJECTAVERAGEPRICESGETMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ObjectAveragePricesGetMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3046;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectAveragePricesGetMessage(ICustomDataInput &input);
};

#endif