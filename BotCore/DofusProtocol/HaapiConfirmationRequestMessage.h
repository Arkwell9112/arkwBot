#ifndef HAAPICONFIRMATIONREQUESTMESSAGE
#define HAAPICONFIRMATIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class HaapiConfirmationRequestMessage : public NetworkInterface {
public:
    double kamas = 0;
    double ogrines = 0;
    unsigned int rate = 0;
    unsigned int action = 0;
    unsigned int protocolId = 7534;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HaapiConfirmationRequestMessage(ICustomDataInput &input);

    void _kamasFunc(ICustomDataInput &input);

    void _ogrinesFunc(ICustomDataInput &input);

    void _rateFunc(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);
};

#endif