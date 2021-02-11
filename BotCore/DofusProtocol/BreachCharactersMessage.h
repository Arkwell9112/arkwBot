#ifndef BREACHCHARACTERSMESSAGE
#define BREACHCHARACTERSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class BreachCharactersMessage : public NetworkInterface {
public:
    std::vector<double> characters;
    unsigned int protocolId = 7407;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachCharactersMessage(ICustomDataInput &input);

    void _charactersFunc(ICustomDataInput &input);
};

#endif