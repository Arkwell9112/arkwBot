#ifndef CHARACTERSLISTWITHREMODELINGMESSAGE
#define CHARACTERSLISTWITHREMODELINGMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "CharacterToRemodelInformations.h"
#include "CharactersListMessage.h"

class CharactersListWithRemodelingMessage : public CharactersListMessage {
public:
    std::vector<CharacterToRemodelInformations> charactersToRemodel;
    unsigned int protocolId = 7723;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharactersListWithRemodelingMessage(ICustomDataInput &input);

    void _charactersToRemodelFunc(ICustomDataInput &input);
};

#endif