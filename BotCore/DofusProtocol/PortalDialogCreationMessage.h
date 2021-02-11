#ifndef PORTALDIALOGCREATIONMESSAGE
#define PORTALDIALOGCREATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "NpcDialogCreationMessage.h"

class PortalDialogCreationMessage : public NpcDialogCreationMessage {
public:
    unsigned int type = 0;
    unsigned int protocolId = 1645;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PortalDialogCreationMessage(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);
};

#endif