#ifndef SERVERSESSIONCONSTANT
#define SERVERSESSIONCONSTANT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ServerSessionConstant : public NetworkInterface {
public:
    unsigned int id = 0;
    unsigned int protocolId = 8194;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSessionConstant(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif