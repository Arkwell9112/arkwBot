#ifndef SHOWCELLSPECTATORMESSAGE
#define SHOWCELLSPECTATORMESSAGE

#include "../IO/ICustomDataInput.h"
#include <string>
#include "ShowCellMessage.h"

class ShowCellSpectatorMessage : public ShowCellMessage {
public:
    std::string playerName;
    unsigned int protocolId = 7427;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShowCellSpectatorMessage(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);
};

#endif