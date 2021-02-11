#ifndef KNOWNZAAPLISTMESSAGE
#define KNOWNZAAPLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class KnownZaapListMessage : public NetworkInterface {
public:
    std::vector<double> destinations;
    unsigned int protocolId = 7811;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_KnownZaapListMessage(ICustomDataInput &input);

    void _destinationsFunc(ICustomDataInput &input);
};

#endif