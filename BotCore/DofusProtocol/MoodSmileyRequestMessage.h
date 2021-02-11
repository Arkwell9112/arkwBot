#ifndef MOODSMILEYREQUESTMESSAGE
#define MOODSMILEYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MoodSmileyRequestMessage : public NetworkInterface {
public:
    unsigned int smileyId = 0;
    unsigned int protocolId = 7284;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MoodSmileyRequestMessage(ICustomDataInput &input);

    void _smileyIdFunc(ICustomDataInput &input);
};

#endif