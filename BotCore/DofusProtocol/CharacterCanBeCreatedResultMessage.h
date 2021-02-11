#ifndef CHARACTERCANBECREATEDRESULTMESSAGE
#define CHARACTERCANBECREATEDRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterCanBeCreatedResultMessage : public NetworkInterface {
public:
    bool yesYouCan = false;
    unsigned int protocolId = 7776;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterCanBeCreatedResultMessage(ICustomDataInput &input);

    void _yesYouCanFunc(ICustomDataInput &input);
};

#endif