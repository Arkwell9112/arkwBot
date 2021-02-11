#ifndef GUILDINFORMATIONSPADDOCKSMESSAGE
#define GUILDINFORMATIONSPADDOCKSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "GuildInformations.h"
#include "PaddockContentInformations.h"

class GuildInformationsPaddocksMessage : public NetworkInterface {
public:
    unsigned int nbPaddockMax = 0;
    std::vector<PaddockContentInformations> paddocksInformations;
    unsigned int protocolId = 9635;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GuildInformationsPaddocksMessage(ICustomDataInput &input);

    void _nbPaddockMaxFunc(ICustomDataInput &input);

    void _paddocksInformationsFunc(ICustomDataInput &input);
};

#endif