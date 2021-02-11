#include "AllianceFactSheetInformations.h"

void AllianceFactSheetInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceFactSheetInformations(input);
}

void AllianceFactSheetInformations::deserializeAs_AllianceFactSheetInformations(ICustomDataInput &input) {
    AllianceInformations::deserialize(input);
    this->_creationDateFunc(input);
}

void AllianceFactSheetInformations::_creationDateFunc(ICustomDataInput &input) {
    this->creationDate = input.readInt();

}

