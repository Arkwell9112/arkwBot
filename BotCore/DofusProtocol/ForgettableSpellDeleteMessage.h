#ifndef FORGETTABLESPELLDELETEMESSAGE
#define FORGETTABLESPELLDELETEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ForgettableSpellDeleteMessage : public NetworkInterface {
public:
    unsigned int reason = 0;
    std::vector<unsigned int> spells;
    unsigned int protocolId = 2176;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ForgettableSpellDeleteMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);

    void _spellsFunc(ICustomDataInput &input);
};

#endif