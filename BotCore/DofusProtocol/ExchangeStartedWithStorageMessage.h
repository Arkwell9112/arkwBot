#ifndef EXCHANGESTARTEDWITHSTORAGEMESSAGE
#define EXCHANGESTARTEDWITHSTORAGEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeStartedMessage.h"

class ExchangeStartedWithStorageMessage : public ExchangeStartedMessage {
public:
    unsigned int storageMaxSlot = 0;
    unsigned int protocolId = 7677;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedWithStorageMessage(ICustomDataInput &input);

    void _storageMaxSlotFunc(ICustomDataInput &input);
};

#endif