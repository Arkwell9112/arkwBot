#ifndef FRIENDSLISTMESSAGE
#define FRIENDSLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "FriendInformations.h"

class FriendsListMessage : public NetworkInterface {
public:
    std::vector<FriendInformations> friendsList;
    unsigned int protocolId = 2367;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FriendsListMessage(ICustomDataInput &input);

    void _friendsListFunc(ICustomDataInput &input);
};

#endif