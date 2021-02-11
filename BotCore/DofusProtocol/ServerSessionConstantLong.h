#ifndef SERVERSESSIONCONSTANTLONG
#define SERVERSESSIONCONSTANTLONG

#include "../IO/ICustomDataInput.h"
#include "ServerSessionConstant.h"

class ServerSessionConstantLong : public ServerSessionConstant {
public:
    double value = 0;
    unsigned int protocolId = 9780;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSessionConstantLong(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif