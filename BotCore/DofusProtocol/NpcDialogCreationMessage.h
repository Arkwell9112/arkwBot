#ifndef NPCDIALOGCREATIONMESSAGE
#define NPCDIALOGCREATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NpcDialogCreationMessage : public NetworkInterface {
public:
    double mapId = 0;
    int npcId = 0;
    unsigned int protocolId = 1953;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NpcDialogCreationMessage(ICustomDataInput &input);

    void _mapIdFunc(ICustomDataInput &input);

    void _npcIdFunc(ICustomDataInput &input);
};

#endif