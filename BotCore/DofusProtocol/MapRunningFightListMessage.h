#ifndef MAPRUNNINGFIGHTLISTMESSAGE
#define MAPRUNNINGFIGHTLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "FightExternalInformations.h"

class MapRunningFightListMessage : public NetworkInterface {
public:
    std::vector<FightExternalInformations> fights;
    unsigned int protocolId = 7349;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MapRunningFightListMessage(ICustomDataInput &input);

    void _fightsFunc(ICustomDataInput &input);
};

#endif