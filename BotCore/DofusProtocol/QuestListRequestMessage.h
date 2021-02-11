#ifndef QUESTLISTREQUESTMESSAGE
#define QUESTLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class QuestListRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9069;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_QuestListRequestMessage(ICustomDataInput &input);
};

#endif