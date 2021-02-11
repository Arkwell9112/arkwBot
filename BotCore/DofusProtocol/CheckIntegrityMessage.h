#ifndef CHECKINTEGRITYMESSAGE
#define CHECKINTEGRITYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class CheckIntegrityMessage : public NetworkInterface {
public:
    std::vector<int> data;
    unsigned int protocolId = 2999;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CheckIntegrityMessage(ICustomDataInput &input);

    void _dataFunc(ICustomDataInput &input);
};

#endif