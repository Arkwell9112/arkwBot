#ifndef ALLIANCEBULLETINMESSAGE
#define ALLIANCEBULLETINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "BulletinMessage.h"

class AllianceBulletinMessage : public BulletinMessage {
public:
    unsigned int protocolId = 5822;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceBulletinMessage(ICustomDataInput &input);
};

#endif