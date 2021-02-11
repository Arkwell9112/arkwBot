#ifndef NPCGENERICACTIONFAILUREMESSAGE
#define NPCGENERICACTIONFAILUREMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class NpcGenericActionFailureMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1660;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NpcGenericActionFailureMessage(ICustomDataInput &input);
};

#endif