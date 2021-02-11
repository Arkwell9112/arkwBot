#ifndef CHARACTERDELETIONREQUESTMESSAGE
#define CHARACTERDELETIONREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <string>

class CharacterDeletionRequestMessage : public NetworkInterface {
public:
    double characterId = 0;
    std::string secretAnswerHash;
    unsigned int protocolId = 222;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterDeletionRequestMessage(ICustomDataInput &input);

    void _characterIdFunc(ICustomDataInput &input);

    void _secretAnswerHashFunc(ICustomDataInput &input);
};

#endif