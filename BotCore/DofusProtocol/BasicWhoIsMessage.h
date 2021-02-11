#ifndef BASICWHOISMESSAGE
#define BASICWHOISMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>
#include "AbstractSocialGroupInfos.h"

class BasicWhoIsMessage : public NetworkInterface {
public:
    bool self = false;
    int position = -1;
    std::string accountNickname;
    unsigned int accountId = 0;
    std::string playerName;
    double playerId = 0;
    int areaId = 0;
    int serverId = 0;
    int originServerId = 0;
    std::vector<AbstractSocialGroupInfos> socialGroups;
    bool verbose = false;
    unsigned int playerState = 99;
    unsigned int protocolId = 2658;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicWhoIsMessage(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _positionFunc(ICustomDataInput &input);

    void _accountNicknameFunc(ICustomDataInput &input);

    void _accountIdFunc(ICustomDataInput &input);

    void _playerNameFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _areaIdFunc(ICustomDataInput &input);

    void _serverIdFunc(ICustomDataInput &input);

    void _originServerIdFunc(ICustomDataInput &input);

    void _socialGroupsFunc(ICustomDataInput &input);

    void _playerStateFunc(ICustomDataInput &input);
};

#endif