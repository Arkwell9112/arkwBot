#ifndef CHECKFILEREQUESTMESSAGE
#define CHECKFILEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class CheckFileRequestMessage : public NetworkInterface {
public:
    std::string filename;
    unsigned int type = 0;
    unsigned int protocolId = 3378;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CheckFileRequestMessage(ICustomDataInput &input);

    void _filenameFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif