#ifndef NAMEDPARTYTEAM
#define NAMEDPARTYTEAM

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class NamedPartyTeam : public NetworkInterface {
public:
    unsigned int teamId = 2;
    std::string partyName;
    unsigned int protocolId = 555;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NamedPartyTeam(ICustomDataInput &input);

    void _teamIdFunc(ICustomDataInput &input);

    void _partyNameFunc(ICustomDataInput &input);
};

#endif