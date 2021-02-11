#ifndef SERVERSESSIONCONSTANTSTRING
#define SERVERSESSIONCONSTANTSTRING

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ServerSessionConstant.h"

class ServerSessionConstantString : public ServerSessionConstant {
public:
    std::string value;
    unsigned int protocolId = 6149;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSessionConstantString(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif