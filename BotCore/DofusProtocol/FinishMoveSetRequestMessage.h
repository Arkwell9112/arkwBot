#ifndef FINISHMOVESETREQUESTMESSAGE
#define FINISHMOVESETREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FinishMoveSetRequestMessage : public NetworkInterface {
public:
    unsigned int finishMoveId = 0;
    bool finishMoveState = false;
    unsigned int protocolId = 394;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FinishMoveSetRequestMessage(ICustomDataInput &input);

    void _finishMoveIdFunc(ICustomDataInput &input);

    void _finishMoveStateFunc(ICustomDataInput &input);
};

#endif