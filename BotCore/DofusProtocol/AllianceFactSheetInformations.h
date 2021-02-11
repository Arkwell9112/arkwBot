#ifndef ALLIANCEFACTSHEETINFORMATIONS
#define ALLIANCEFACTSHEETINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "AllianceInformations.h"

class AllianceFactSheetInformations : public AllianceInformations {
public:
    unsigned int creationDate = 0;
    unsigned int protocolId = 1553;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AllianceFactSheetInformations(ICustomDataInput &input);

    void _creationDateFunc(ICustomDataInput &input);
};

#endif