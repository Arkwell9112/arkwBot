#ifndef POPUPWARNINGMESSAGE
#define POPUPWARNINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class PopupWarningMessage : public NetworkInterface {
public:
    unsigned int lockDuration = 0;
    std::string author;
    std::string content;
    unsigned int protocolId = 2107;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PopupWarningMessage(ICustomDataInput &input);

    void _lockDurationFunc(ICustomDataInput &input);

    void _authorFunc(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);
};

#endif