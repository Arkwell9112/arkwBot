#ifndef INTERACTIVEUSEWITHPARAMREQUESTMESSAGE
#define INTERACTIVEUSEWITHPARAMREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "InteractiveUseRequestMessage.h"

class InteractiveUseWithParamRequestMessage : public InteractiveUseRequestMessage {
public:
    int id = 0;
    unsigned int protocolId = 9161;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InteractiveUseWithParamRequestMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif