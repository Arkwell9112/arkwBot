#ifndef CONTACTLOOKREQUESTBYNAMEMESSAGE
#define CONTACTLOOKREQUESTBYNAMEMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ContactLookRequestMessage.h"

class ContactLookRequestByNameMessage : public ContactLookRequestMessage {
public:
    std::string playerName;
    unsigned int protocolId = 9255;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ContactLookRequestByNameMessage(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);
};

#endif