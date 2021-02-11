#ifndef IDOLLISTMESSAGE
#define IDOLLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "PartyIdol.h"
#include "Idol.h"

class IdolListMessage : public NetworkInterface {
public:
    std::vector<unsigned int> chosenIdols;
    std::vector<unsigned int> partyChosenIdols;
    std::vector<PartyIdol> partyIdols;
    unsigned int protocolId = 7726;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolListMessage(ICustomDataInput &input);

    void _chosenIdolsFunc(ICustomDataInput &input);

    void _partyChosenIdolsFunc(ICustomDataInput &input);

    void _partyIdolsFunc(ICustomDataInput &input);
};

#endif