#ifndef HUMANOPTIONFOLLOWERS
#define HUMANOPTIONFOLLOWERS

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "HumanOption.h"
#include "IndexedEntityLook.h"
#include "EntityLook.h"

class HumanOptionFollowers : public HumanOption {
public:
    std::vector<IndexedEntityLook> followingCharactersLook;
    unsigned int protocolId = 7484;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_HumanOptionFollowers(ICustomDataInput &input);

    void _followingCharactersLookFunc(ICustomDataInput &input);
};

#endif