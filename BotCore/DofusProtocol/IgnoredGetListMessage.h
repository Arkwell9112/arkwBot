#ifndef IGNOREDGETLISTMESSAGE
#define IGNOREDGETLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class IgnoredGetListMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9301;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredGetListMessage(ICustomDataInput &input);
};

#endif