#ifndef ADMINQUIETCOMMANDMESSAGE
#define ADMINQUIETCOMMANDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "AdminCommandMessage.h"

class AdminQuietCommandMessage : public AdminCommandMessage {
public:
    unsigned int protocolId = 1938;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AdminQuietCommandMessage(ICustomDataInput &input);
};

#endif