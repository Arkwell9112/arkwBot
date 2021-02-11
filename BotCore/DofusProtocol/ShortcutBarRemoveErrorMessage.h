#ifndef SHORTCUTBARREMOVEERRORMESSAGE
#define SHORTCUTBARREMOVEERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarRemoveErrorMessage : public NetworkInterface {
public:
    unsigned int error = 0;
    unsigned int protocolId = 7362;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarRemoveErrorMessage(ICustomDataInput &input);

    void _errorFunc(ICustomDataInput &input);
};

#endif