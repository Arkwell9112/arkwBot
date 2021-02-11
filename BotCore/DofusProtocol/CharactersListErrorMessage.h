#ifndef CHARACTERSLISTERRORMESSAGE
#define CHARACTERSLISTERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharactersListErrorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6250;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharactersListErrorMessage(ICustomDataInput &input);
};

#endif