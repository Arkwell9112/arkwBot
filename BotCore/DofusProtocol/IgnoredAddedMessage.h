#ifndef IGNOREDADDEDMESSAGE
#define IGNOREDADDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "IgnoredInformations.h"

class IgnoredAddedMessage : public NetworkInterface {
public:
    IgnoredInformations ignoreAdded;
    bool session = false;
    unsigned int protocolId = 2887;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredAddedMessage(ICustomDataInput &input);

    void _sessionFunc(ICustomDataInput &input);
};

#endif