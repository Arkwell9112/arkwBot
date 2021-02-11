#ifndef CHECKFILEMESSAGE
#define CHECKFILEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class CheckFileMessage : public NetworkInterface {
public:
    std::string filenameHash;
    unsigned int type = 0;
    std::string value;
    unsigned int protocolId = 5785;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CheckFileMessage(ICustomDataInput &input);

    void _filenameHashFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif