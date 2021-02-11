#ifndef SHORTCUTBARADDERRORMESSAGE
#define SHORTCUTBARADDERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarAddErrorMessage : public NetworkInterface {
public:
    unsigned int error = 0;
    unsigned int protocolId = 2707;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarAddErrorMessage(ICustomDataInput &input);

    void _errorFunc(ICustomDataInput &input);
};

#endif