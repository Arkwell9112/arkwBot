#ifndef SELECTEDSERVERDATAEXTENDEDMESSAGE
#define SELECTEDSERVERDATAEXTENDEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "GameServerInformations.h"
#include "SelectedServerDataMessage.h"

class SelectedServerDataExtendedMessage : public SelectedServerDataMessage {
public:
    std::vector<GameServerInformations> servers;
    unsigned int protocolId = 2106;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SelectedServerDataExtendedMessage(ICustomDataInput &input);

    void _serversFunc(ICustomDataInput &input);
};

#endif