#ifndef EXCHANGETYPESEXCHANGERDESCRIPTIONFORUSERMESSAGE
#define EXCHANGETYPESEXCHANGERDESCRIPTIONFORUSERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeTypesExchangerDescriptionForUserMessage : public NetworkInterface {
public:
    unsigned int objectType = 0;
    std::vector<unsigned int> typeDescription;
    unsigned int protocolId = 3827;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeTypesExchangerDescriptionForUserMessage(ICustomDataInput &input);

    void _objectTypeFunc(ICustomDataInput &input);

    void _typeDescriptionFunc(ICustomDataInput &input);
};

#endif