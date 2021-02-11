#ifndef SHORTCUTBARSWAPERRORMESSAGE
#define SHORTCUTBARSWAPERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarSwapErrorMessage : public NetworkInterface {
public:
    unsigned int error = 0;
    unsigned int protocolId = 5982;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarSwapErrorMessage(ICustomDataInput &input);

    void _errorFunc(ICustomDataInput &input);
};

#endif