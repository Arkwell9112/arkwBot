#ifndef FINISHMOVEINFORMATIONS
#define FINISHMOVEINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class FinishMoveInformations : public NetworkInterface {
public:
    unsigned int finishMoveId = 0;
    bool finishMoveState = false;
    unsigned int protocolId = 2518;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FinishMoveInformations(ICustomDataInput &input);

    void _finishMoveIdFunc(ICustomDataInput &input);

    void _finishMoveStateFunc(ICustomDataInput &input);
};

#endif