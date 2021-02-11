#ifndef IGNOREDADDFAILUREMESSAGE
#define IGNOREDADDFAILUREMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class IgnoredAddFailureMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    unsigned int protocolId = 4369;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredAddFailureMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif