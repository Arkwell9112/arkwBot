#ifndef CHARACTERSELECTIONMESSAGE
#define CHARACTERSELECTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterSelectionMessage : public NetworkInterface {
public:
    double id = 0;
    unsigned int protocolId = 3151;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterSelectionMessage(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif