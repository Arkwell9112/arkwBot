#ifndef HAAPIVALIDATIONREQUESTMESSAGE
#define HAAPIVALIDATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class HaapiValidationRequestMessage : public NetworkInterface {
public:
    std::string transaction;
    unsigned int protocolId = 9033;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiValidationRequestMessage(ICustomDataInput &input);

    void _transactionFunc(ICustomDataInput &input);
};

#endif