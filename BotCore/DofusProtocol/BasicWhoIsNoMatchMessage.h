#ifndef BASICWHOISNOMATCHMESSAGE
#define BASICWHOISNOMATCHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class BasicWhoIsNoMatchMessage : public NetworkInterface {
public:
    std::string search;
    unsigned int protocolId = 2998;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicWhoIsNoMatchMessage(ICustomDataInput &input);

    void _searchFunc(ICustomDataInput &input);
};

#endif