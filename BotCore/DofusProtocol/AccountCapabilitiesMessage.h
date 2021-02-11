#ifndef ACCOUNTCAPABILITIESMESSAGE
#define ACCOUNTCAPABILITIESMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AccountCapabilitiesMessage : public NetworkInterface {
public:
    unsigned int accountId = 0;
    bool tutorialAvailable = false;
    unsigned int breedsVisible = 0;
    unsigned int breedsAvailable = 0;
    int status = -1;
    bool canCreateNewCharacter = false;
    unsigned int protocolId = 3090;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AccountCapabilitiesMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _breedsVisibleFunc(ICustomDataInput &input);

    void _breedsAvailableFunc(ICustomDataInput &input);

    void _statusFunc(ICustomDataInput &input);
};

#endif