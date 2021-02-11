#ifndef GAMEDATAPADDOCKOBJECTREMOVEMESSAGE
#define GAMEDATAPADDOCKOBJECTREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameDataPaddockObjectRemoveMessage : public NetworkInterface {
public:
    unsigned int cellId = 0;
    unsigned int protocolId = 3122;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameDataPaddockObjectRemoveMessage(ICustomDataInput &input);

    void _cellIdFunc(ICustomDataInput &input);
};

#endif