#ifndef CHARACTERCREATIONRESULTMESSAGE
#define CHARACTERCREATIONRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterCreationResultMessage : public NetworkInterface {
public:
    unsigned int result = 1;
    unsigned int protocolId = 4344;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCreationResultMessage(ICustomDataInput &input);

    void _resultFunc(ICustomDataInput &input);
};

#endif