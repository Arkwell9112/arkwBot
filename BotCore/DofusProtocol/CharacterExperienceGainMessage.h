#ifndef CHARACTEREXPERIENCEGAINMESSAGE
#define CHARACTEREXPERIENCEGAINMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class CharacterExperienceGainMessage : public NetworkInterface {
public:
    double experienceCharacter = 0;
    double experienceMount = 0;
    double experienceGuild = 0;
    double experienceIncarnation = 0;
    unsigned int protocolId = 6531;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_CharacterExperienceGainMessage(ICustomDataInput &input);

    void _experienceCharacterFunc(ICustomDataInput &input);

    void _experienceMountFunc(ICustomDataInput &input);

    void _experienceGuildFunc(ICustomDataInput &input);

    void _experienceIncarnationFunc(ICustomDataInput &input);
};

#endif