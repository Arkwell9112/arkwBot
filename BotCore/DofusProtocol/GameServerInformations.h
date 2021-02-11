#ifndef GAMESERVERINFORMATIONS
#define GAMESERVERINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameServerInformations : public NetworkInterface {
public:
    unsigned int id = 0;
    int type = -1;
    bool isMonoAccount = false;
    unsigned int status = 1;
    unsigned int completion = 0;
    bool isSelectable = false;
    unsigned int charactersCount = 0;
    unsigned int charactersSlots = 0;
    double date = 0;
    unsigned int protocolId = 3198;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameServerInformations(ICustomDataInput &input);

    void deserializeByteBoxes(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _typeFunc(ICustomDataInput &input);

    void _statusFunc(ICustomDataInput &input);

    void _completionFunc(ICustomDataInput &input);

    void _charactersCountFunc(ICustomDataInput &input);

    void _charactersSlotsFunc(ICustomDataInput &input);

    void _dateFunc(ICustomDataInput &input);
};

#endif