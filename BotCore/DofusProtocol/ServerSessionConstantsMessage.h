#ifndef SERVERSESSIONCONSTANTSMESSAGE
#define SERVERSESSIONCONSTANTSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ServerSessionConstant.h"

class ServerSessionConstantsMessage : public NetworkInterface {
public:
    std::vector<ServerSessionConstant> variables;
    unsigned int protocolId = 4947;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSessionConstantsMessage(ICustomDataInput &input);

    void _variablesFunc(ICustomDataInput &input);
};

#endif