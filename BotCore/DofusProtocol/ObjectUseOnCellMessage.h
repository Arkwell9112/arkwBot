#ifndef OBJECTUSEONCELLMESSAGE
#define OBJECTUSEONCELLMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ObjectUseMessage.h"

class ObjectUseOnCellMessage : public ObjectUseMessage {
public:
    unsigned int cells = 0;
    unsigned int protocolId = 2840;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectUseOnCellMessage(ICustomDataInput &input);

    void _cellsFunc(ICustomDataInput &input);
};

#endif