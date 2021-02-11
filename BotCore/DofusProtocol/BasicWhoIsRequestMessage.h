#ifndef BASICWHOISREQUESTMESSAGE
#define BASICWHOISREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class BasicWhoIsRequestMessage : public NetworkInterface {
public:
    bool verbose = false;
    std::string search;
    unsigned int protocolId = 5985;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicWhoIsRequestMessage(ICustomDataInput &input);

    void _verboseFunc(ICustomDataInput &input);

    void _searchFunc(ICustomDataInput &input);
};

#endif