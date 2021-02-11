#ifndef TEXTINFORMATIONMESSAGE
#define TEXTINFORMATIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class TextInformationMessage : public NetworkInterface {
public:
    unsigned int msgType = 0;
    unsigned int msgId = 0;
    std::vector<std::string> parameters;
    unsigned int protocolId = 8191;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TextInformationMessage(ICustomDataInput &input);

    void _msgTypeFunc(ICustomDataInput &input);

    void _msgIdFunc(ICustomDataInput &input);

    void _parametersFunc(ICustomDataInput &input);
};

#endif