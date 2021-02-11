#ifndef SOCIALNOTICEMESSAGE
#define SOCIALNOTICEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class SocialNoticeMessage : public NetworkInterface {
public:
    std::string content;
    unsigned int timestamp = 0;
    double memberId = 0;
    std::string memberName;
    unsigned int protocolId = 2381;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_SocialNoticeMessage(ICustomDataInput &input);

    void _contentFunc(ICustomDataInput &input);

    void _timestampFunc(ICustomDataInput &input);

    void _memberIdFunc(ICustomDataInput &input);

    void _memberNameFunc(ICustomDataInput &input);
};

#endif