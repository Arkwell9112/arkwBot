#ifndef COMPASSUPDATEPVPSEEKMESSAGE
#define COMPASSUPDATEPVPSEEKMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "CompassUpdateMessage.h"

class CompassUpdatePvpSeekMessage : public CompassUpdateMessage {
public:
    double memberId = 0;
    std::string memberName;
    unsigned int protocolId = 6457;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CompassUpdatePvpSeekMessage(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _memberNameFunc(ICustomDataInput &input);
};

#endif