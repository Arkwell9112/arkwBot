#ifndef EDITHAVENBAGREQUESTMESSAGE
#define EDITHAVENBAGREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EditHavenBagRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1619;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EditHavenBagRequestMessage(ICustomDataInput &input);
};

#endif