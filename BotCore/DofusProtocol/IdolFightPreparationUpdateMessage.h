#ifndef IDOLFIGHTPREPARATIONUPDATEMESSAGE
#define IDOLFIGHTPREPARATIONUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Idol.h"

class IdolFightPreparationUpdateMessage : public NetworkInterface {
public:
    unsigned int idolSource = 0;
    std::vector<Idol> idols;
    unsigned int protocolId = 3005;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdolFightPreparationUpdateMessage(ICustomDataInput &input);

    void _idolSourceFunc(ICustomDataInput &input);

    void _idolsFunc(ICustomDataInput &input);
};

#endif