#ifndef CHARACTERREPLAYREQUESTMESSAGE
#define CHARACTERREPLAYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterReplayRequestMessage : public NetworkInterface {
public:
    double characterId = 0;
    unsigned int protocolId = 1772;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterReplayRequestMessage(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);
};

#endif