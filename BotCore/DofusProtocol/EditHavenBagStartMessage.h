#ifndef EDITHAVENBAGSTARTMESSAGE
#define EDITHAVENBAGSTARTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EditHavenBagStartMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1445;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EditHavenBagStartMessage(ICustomDataInput &input);
};

#endif