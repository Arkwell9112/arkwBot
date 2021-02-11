#ifndef FINISHMOVELISTMESSAGE
#define FINISHMOVELISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "FinishMoveInformations.h"

class FinishMoveListMessage : public NetworkInterface {
public:
    std::vector<FinishMoveInformations> finishMoves;
    unsigned int protocolId = 3960;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FinishMoveListMessage(ICustomDataInput &input);

    void _finishMovesFunc(ICustomDataInput &input);
};

#endif