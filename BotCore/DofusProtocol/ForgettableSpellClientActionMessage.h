#ifndef FORGETTABLESPELLCLIENTACTIONMESSAGE
#define FORGETTABLESPELLCLIENTACTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ForgettableSpellClientActionMessage : public NetworkInterface {
public:
    unsigned int spellId = 0;
    unsigned int action = 0;
    unsigned int protocolId = 4332;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ForgettableSpellClientActionMessage(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);

    void _actionFunc(ICustomDataInput &input);
};

#endif