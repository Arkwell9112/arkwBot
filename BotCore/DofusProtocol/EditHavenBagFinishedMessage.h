#ifndef EDITHAVENBAGFINISHEDMESSAGE
#define EDITHAVENBAGFINISHEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EditHavenBagFinishedMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7066;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EditHavenBagFinishedMessage(ICustomDataInput &input);
};

#endif