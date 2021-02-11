#ifndef EXCHANGECRAFTRESULTWITHOBJECTIDMESSAGE
#define EXCHANGECRAFTRESULTWITHOBJECTIDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeCraftResultMessage.h"

class ExchangeCraftResultWithObjectIdMessage : public ExchangeCraftResultMessage {
public:
    unsigned int objectGenericId = 0;
    unsigned int protocolId = 7244;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftResultWithObjectIdMessage(ICustomDataInput &input);

    void _objectGenericIdFunc(ICustomDataInput &input);
};

#endif