#ifndef IDOLPARTYREFRESHMESSAGE
#define IDOLPARTYREFRESHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "PartyIdol.h"
#include "Idol.h"

class IdolPartyRefreshMessage : public NetworkInterface {
public:
    PartyIdol partyIdol;
    unsigned int protocolId = 3723;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolPartyRefreshMessage(ICustomDataInput &input);
};

#endif