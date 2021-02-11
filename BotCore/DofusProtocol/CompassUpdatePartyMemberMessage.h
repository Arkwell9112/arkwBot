#ifndef COMPASSUPDATEPARTYMEMBERMESSAGE
#define COMPASSUPDATEPARTYMEMBERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "CompassUpdateMessage.h"

class CompassUpdatePartyMemberMessage : public CompassUpdateMessage {
public:
    double memberId = 0;
    bool active = false;
    unsigned int protocolId = 6906;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CompassUpdatePartyMemberMessage(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _activeFunc(ICustomDataInput &input);
};

#endif