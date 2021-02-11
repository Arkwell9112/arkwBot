#ifndef SERVERSETTINGSMESSAGE
#define SERVERSETTINGSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class ServerSettingsMessage : public NetworkInterface {
public:
    std::string lang;
    unsigned int community = 0;
    int gameType = -1;
    bool isMonoAccount = false;
    unsigned int arenaLeaveBanTime = 0;
    unsigned int itemMaxLevel = 0;
    bool hasFreeAutopilot = false;
    unsigned int protocolId = 2916;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ServerSettingsMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _langFunc(ICustomDataInput &input);

    void _communityFunc(ICustomDataInput &input);

    void _gameTypeFunc(ICustomDataInput &input);

    void _arenaLeaveBanTimeFunc(ICustomDataInput &input);

    void _itemMaxLevelFunc(ICustomDataInput &input);
};

#endif