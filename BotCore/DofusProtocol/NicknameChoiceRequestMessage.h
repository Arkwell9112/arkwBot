#ifndef NICKNAMECHOICEREQUESTMESSAGE
#define NICKNAMECHOICEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class NicknameChoiceRequestMessage : public NetworkInterface {
public:
    std::string nickname;
    unsigned int protocolId = 7249;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NicknameChoiceRequestMessage(ICustomDataInput &input);

    void _nicknameFunc(ICustomDataInput &input);
};

#endif