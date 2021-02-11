#ifndef ACCESSORYPREVIEWREQUESTMESSAGE
#define ACCESSORYPREVIEWREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class AccessoryPreviewRequestMessage : public NetworkInterface {
public:
    std::vector<unsigned int> genericId;
    unsigned int protocolId = 5863;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccessoryPreviewRequestMessage(ICustomDataInput &input);

    void _genericIdFunc(ICustomDataInput &input);
};

#endif