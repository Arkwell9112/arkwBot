#ifndef NPCGENERICACTIONREQUESTMESSAGE
#define NPCGENERICACTIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NpcGenericActionRequestMessage : public NetworkInterface {
public:
    int npcId = 0;
    unsigned int npcActionId = 0;
    double npcMapId = 0;
    unsigned int protocolId = 6429;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NpcGenericActionRequestMessage(ICustomDataInput &input);

    void _npcIdFunc(ICustomDataInput &input);

    void _npcActionIdFunc(ICustomDataInput &input);

    void _npcMapIdFunc(ICustomDataInput &input);
};

#endif