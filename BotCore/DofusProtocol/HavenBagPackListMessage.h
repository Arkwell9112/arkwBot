#ifndef HAVENBAGPACKLISTMESSAGE
#define HAVENBAGPACKLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class HavenBagPackListMessage : public NetworkInterface {
public:
    std::vector<int> packIds;
    unsigned int protocolId = 4325;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HavenBagPackListMessage(ICustomDataInput &input);

    void _packIdsFunc(ICustomDataInput &input);
};

#endif