#ifndef DOCUMENTREADINGBEGINMESSAGE
#define DOCUMENTREADINGBEGINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class DocumentReadingBeginMessage : public NetworkInterface {
public:
    unsigned int documentId = 0;
    unsigned int protocolId = 6278;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_DocumentReadingBeginMessage(ICustomDataInput &input);

    void _documentIdFunc(ICustomDataInput &input);
};

#endif