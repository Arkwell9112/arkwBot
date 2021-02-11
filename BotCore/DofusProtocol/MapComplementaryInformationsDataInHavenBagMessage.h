#ifndef MAPCOMPLEMENTARYINFORMATIONSDATAINHAVENBAGMESSAGE
#define MAPCOMPLEMENTARYINFORMATIONSDATAINHAVENBAGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "MapComplementaryInformationsDataMessage.h"
#include "CharacterMinimalInformations.h"

class MapComplementaryInformationsDataInHavenBagMessage : public MapComplementaryInformationsDataMessage {
public:
    CharacterMinimalInformations ownerInformations;
    int theme = 0;
    unsigned int roomId = 0;
    unsigned int maxRoomId = 0;
    unsigned int protocolId = 3024;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapComplementaryInformationsDataInHavenBagMessage(ICustomDataInput &input);

    void _themeFunc(ICustomDataInput &input);

    void _roomIdFunc(ICustomDataInput &input);

    void _maxRoomIdFunc(ICustomDataInput &input);
};

#endif