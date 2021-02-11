#ifndef PARTYNAMESETERRORMESSAGE
#define PARTYNAMESETERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AbstractPartyMessage.h"

class PartyNameSetErrorMessage : public AbstractPartyMessage {
public:
    unsigned int result = 0;
    unsigned int protocolId = 6623;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PartyNameSetErrorMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif