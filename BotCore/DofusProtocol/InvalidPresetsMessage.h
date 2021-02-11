#ifndef INVALIDPRESETSMESSAGE
#define INVALIDPRESETSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Preset.h"
#include "PresetsMessage.h"

class InvalidPresetsMessage : public NetworkInterface {
public:
    std::vector<unsigned int> presetIds;
    unsigned int protocolId = 2780;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InvalidPresetsMessage(ICustomDataInput &input);

    void _presetIdsFunc(ICustomDataInput &input);
};

#endif