#ifndef HAAPIVALIDATIONMESSAGE
#define HAAPIVALIDATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiValidationMessage : public NetworkInterface {
public:
    unsigned int action = 0;
    unsigned int code = 0;
    unsigned int protocolId = 9467;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiValidationMessage(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);

    void _codeFunc(ICustomDataInput &input);
};

#endif