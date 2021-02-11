#ifndef IDENTIFIEDENTITYDISPOSITIONINFORMATIONS
#define IDENTIFIEDENTITYDISPOSITIONINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "EntityDispositionInformations.h"

class IdentifiedEntityDispositionInformations : public EntityDispositionInformations {
public:
    double id = 0;
    unsigned int protocolId = 6346;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_IdentifiedEntityDispositionInformations(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);
};

#endif