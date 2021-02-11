#ifndef IGNOREDLISTMESSAGE
#define IGNOREDLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "IgnoredInformations.h"

class IgnoredListMessage : public NetworkInterface {
public:
    std::vector<IgnoredInformations> ignoredList;
    unsigned int protocolId = 2268;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredListMessage(ICustomDataInput &input);

    void _ignoredListFunc(ICustomDataInput &input);
};

#endif