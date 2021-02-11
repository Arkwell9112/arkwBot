#ifndef BREACHINVITATIONANSWERMESSAGE
#define BREACHINVITATIONANSWERMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BreachInvitationAnswerMessage : public NetworkInterface {
public:
    bool accept = false;
    unsigned int protocolId = 9447;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BreachInvitationAnswerMessage(ICustomDataInput &input);

    void _acceptFunc(ICustomDataInput &input);
};

#endif