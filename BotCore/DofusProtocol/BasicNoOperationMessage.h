#ifndef BASICNOOPERATIONMESSAGE
#define BASICNOOPERATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicNoOperationMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3231;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicNoOperationMessage(ICustomDataInput &input);
};

#endif