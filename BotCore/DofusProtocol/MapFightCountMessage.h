#ifndef MAPFIGHTCOUNTMESSAGE
#define MAPFIGHTCOUNTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MapFightCountMessage : public NetworkInterface {
public:
    unsigned int fightCount = 0;
    unsigned int protocolId = 7172;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapFightCountMessage(ICustomDataInput &input);

    void _fightCountFunc(ICustomDataInput &input);
};

#endif