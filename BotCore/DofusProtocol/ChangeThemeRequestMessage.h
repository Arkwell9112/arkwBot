#ifndef CHANGETHEMEREQUESTMESSAGE
#define CHANGETHEMEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ChangeThemeRequestMessage : public NetworkInterface {
public:
    int theme = 0;
    unsigned int protocolId = 8122;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ChangeThemeRequestMessage(ICustomDataInput &input);

    void _themeFunc(ICustomDataInput &input);
};

#endif