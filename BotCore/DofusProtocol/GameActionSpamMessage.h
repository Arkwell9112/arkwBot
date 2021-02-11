#ifndef GAMEACTIONSPAMMESSAGE
#define GAMEACTIONSPAMMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class GameActionSpamMessage : public NetworkInterface {
public:
    std::vector<int> cells;
    unsigned int protocolId = 6143;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameActionSpamMessage(ICustomDataInput &input);

    void _cellsFunc(ICustomDataInput &input);
};

#endif