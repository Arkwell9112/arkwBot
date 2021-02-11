#ifndef CHARACTERDELETIONERRORMESSAGE
#define CHARACTERDELETIONERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterDeletionErrorMessage : public NetworkInterface {
public:
    unsigned int reason = 1;
    unsigned int protocolId = 765;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterDeletionErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif