#ifndef BASICCHARACTERSLISTMESSAGE
#define BASICCHARACTERSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "CharacterBaseInformations.h"

class BasicCharactersListMessage : public NetworkInterface {
public:
    std::vector<CharacterBaseInformations> characters;
    unsigned int protocolId = 9379;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicCharactersListMessage(ICustomDataInput &input);

    void _charactersFunc(ICustomDataInput &input);
};

#endif