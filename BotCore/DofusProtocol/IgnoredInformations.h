#ifndef IGNOREDINFORMATIONS
#define IGNOREDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "AbstractContactInformations.h"

class IgnoredInformations : public AbstractContactInformations {
public:
    unsigned int protocolId = 2408;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IgnoredInformations(ICustomDataInput &input);
};

#endif