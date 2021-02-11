#ifndef EXCHANGECRAFTRESULTMAGICWITHOBJECTDESCMESSAGE
#define EXCHANGECRAFTRESULTMAGICWITHOBJECTDESCMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeCraftResultWithObjectDescMessage.h"

class ExchangeCraftResultMagicWithObjectDescMessage : public ExchangeCraftResultWithObjectDescMessage {
public:
    int magicPoolStatus = 0;
    unsigned int protocolId = 84;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftResultMagicWithObjectDescMessage(ICustomDataInput &input);

    void _magicPoolStatusFunc(ICustomDataInput &input);
};

#endif