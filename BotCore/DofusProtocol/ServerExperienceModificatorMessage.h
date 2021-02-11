#ifndef SERVEREXPERIENCEMODIFICATORMESSAGE
#define SERVEREXPERIENCEMODIFICATORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ServerExperienceModificatorMessage : public NetworkInterface {
public:
    unsigned int experiencePercent = 0;
    unsigned int protocolId = 9490;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerExperienceModificatorMessage(ICustomDataInput &input);

    void _experiencePercentFunc(ICustomDataInput &input);
};

#endif