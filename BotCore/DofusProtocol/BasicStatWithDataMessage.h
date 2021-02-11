#ifndef BASICSTATWITHDATAMESSAGE
#define BASICSTATWITHDATAMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "StatisticData.h"
#include "BasicStatMessage.h"

class BasicStatWithDataMessage : public BasicStatMessage {
public:
    std::vector<StatisticData> datas;
    unsigned int protocolId = 3174;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicStatWithDataMessage(ICustomDataInput &input);

    void _datasFunc(ICustomDataInput &input);
};

#endif