#ifndef SERVERSESSIONCONSTANTINTEGER
#define SERVERSESSIONCONSTANTINTEGER

#include "../IO/ICustomDataInput.h"
#include "ServerSessionConstant.h"

class ServerSessionConstantInteger : public ServerSessionConstant {
public:
    int value = 0;
    unsigned int protocolId = 8729;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSessionConstantInteger(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif