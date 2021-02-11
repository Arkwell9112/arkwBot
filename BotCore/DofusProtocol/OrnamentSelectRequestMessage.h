#ifndef ORNAMENTSELECTREQUESTMESSAGE
#define ORNAMENTSELECTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class OrnamentSelectRequestMessage : public NetworkInterface {
public:
    unsigned int ornamentId = 0;
    unsigned int protocolId = 2389;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_OrnamentSelectRequestMessage(ICustomDataInput &input);

    void _ornamentIdFunc(ICustomDataInput &input);
};

#endif