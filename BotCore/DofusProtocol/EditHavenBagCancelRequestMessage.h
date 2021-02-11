#ifndef EDITHAVENBAGCANCELREQUESTMESSAGE
#define EDITHAVENBAGCANCELREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class EditHavenBagCancelRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8345;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EditHavenBagCancelRequestMessage(ICustomDataInput &input);
};

#endif