#include "AllianceCreationResultMessage.h"

void AllianceCreationResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceCreationResultMessage(input);
}

void AllianceCreationResultMessage::deserializeAs_AllianceCreationResultMessage(ICustomDataInput &input) {
    this->_resultFunc(input);
}

void AllianceCreationResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

