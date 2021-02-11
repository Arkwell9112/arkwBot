#ifndef MIGRATEDSERVERLISTMESSAGE
#define MIGRATEDSERVERLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class MigratedServerListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> migratedServerIds;
    unsigned int protocolId = 9775;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MigratedServerListMessage(ICustomDataInput &input);

    void _migratedServerIdsFunc(ICustomDataInput &input);
};

#endif