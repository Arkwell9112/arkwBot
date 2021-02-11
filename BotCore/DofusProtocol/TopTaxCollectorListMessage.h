#ifndef TOPTAXCOLLECTORLISTMESSAGE
#define TOPTAXCOLLECTORLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorListMessage.h"
#include "AbstractTaxCollectorListMessage.h"

class TopTaxCollectorListMessage : public AbstractTaxCollectorListMessage {
public:
    bool isDungeon = false;
    unsigned int protocolId = 3027;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TopTaxCollectorListMessage(ICustomDataInput &input);

    void _isDungeonFunc(ICustomDataInput &input);
};

#endif