#ifndef MOODSMILEYRESULTMESSAGE
#define MOODSMILEYRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class MoodSmileyResultMessage : public NetworkInterface {
public:
    unsigned int resultCode = 1;
    unsigned int smileyId = 0;
    unsigned int protocolId = 9425;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_MoodSmileyResultMessage(ICustomDataInput &input);

    void _resultCodeFunc(ICustomDataInput &input);

    void _smileyIdFunc(ICustomDataInput &input);
};

#endif