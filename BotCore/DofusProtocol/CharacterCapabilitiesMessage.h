#ifndef CHARACTERCAPABILITIESMESSAGE
#define CHARACTERCAPABILITIESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterCapabilitiesMessage : public NetworkInterface {
public:
    unsigned int guildEmblemSymbolCategories = 0;
    unsigned int protocolId = 5809;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCapabilitiesMessage(ICustomDataInput &input);

    void _guildEmblemSymbolCategoriesFunc(ICustomDataInput &input);
};

#endif