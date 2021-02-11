#ifndef RELOGINTOKENSTATUSMESSAGE
#define RELOGINTOKENSTATUSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ReloginTokenStatusMessage : public NetworkInterface {
public:
    bool validToken = false;
    std::vector<int> ticket;
    unsigned int protocolId = 4876;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ReloginTokenStatusMessage(ICustomDataInput &input);

    void _validTokenFunc(ICustomDataInput &input);

    void _ticketFunc(ICustomDataInput &input);
};

#endif