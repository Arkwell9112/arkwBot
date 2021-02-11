#ifndef CHARACTERLOADINGCOMPLETEMESSAGE
#define CHARACTERLOADINGCOMPLETEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterLoadingCompleteMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1255;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterLoadingCompleteMessage(ICustomDataInput &input);
};

#endif