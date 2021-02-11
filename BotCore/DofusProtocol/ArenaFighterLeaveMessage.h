#ifndef ARENAFIGHTERLEAVEMESSAGE
#define ARENAFIGHTERLEAVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "CharacterBasicMinimalInformations.h"

class ArenaFighterLeaveMessage : public NetworkInterface {
public:
    CharacterBasicMinimalInformations leaver;
    unsigned int protocolId = 8348;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ArenaFighterLeaveMessage(ICustomDataInput &input);
};

#endif