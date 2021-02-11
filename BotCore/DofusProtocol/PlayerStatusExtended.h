#ifndef PLAYERSTATUSEXTENDED
#define PLAYERSTATUSEXTENDED

#include "../IO/ICustomDataInput.h"
#include <string>
#include "PlayerStatus.h"

class PlayerStatusExtended : public PlayerStatus {
public:
    std::string message;
    unsigned int protocolId = 865;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PlayerStatusExtended(ICustomDataInput &input);

    void _messageFunc(ICustomDataInput &input);
};

#endif