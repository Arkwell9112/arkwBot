#ifndef SERVEROPTIONALFEATURESMESSAGE
#define SERVEROPTIONALFEATURESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ServerOptionalFeaturesMessage : public NetworkInterface {
public:
    std::vector<unsigned int> features;
    unsigned int protocolId = 3844;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerOptionalFeaturesMessage(ICustomDataInput &input);

    void _featuresFunc(ICustomDataInput &input);
};

#endif