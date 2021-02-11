#ifndef NUMERICWHOISREQUESTMESSAGE
#define NUMERICWHOISREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NumericWhoIsRequestMessage : public NetworkInterface {
public:
    double playerId = 0;
    unsigned int protocolId = 5142;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NumericWhoIsRequestMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif