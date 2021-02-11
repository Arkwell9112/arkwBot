#ifndef HOUSELOCKFROMINSIDEREQUESTMESSAGE
#define HOUSELOCKFROMINSIDEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "LockableChangeCodeMessage.h"

class HouseLockFromInsideRequestMessage : public LockableChangeCodeMessage {
public:
    unsigned int protocolId = 595;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HouseLockFromInsideRequestMessage(ICustomDataInput &input);
};

#endif