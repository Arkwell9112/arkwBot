#ifndef ACCESSORYPREVIEWERRORMESSAGE
#define ACCESSORYPREVIEWERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AccessoryPreviewErrorMessage : public NetworkInterface {
public:
    unsigned int error = 0;
    unsigned int protocolId = 3382;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccessoryPreviewErrorMessage(ICustomDataInput &input);

    void _errorFunc(ICustomDataInput &input);
};

#endif