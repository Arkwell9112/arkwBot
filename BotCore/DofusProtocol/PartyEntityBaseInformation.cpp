#include "PartyEntityBaseInformation.h"

void PartyEntityBaseInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyEntityBaseInformation(input);
}

void PartyEntityBaseInformation::deserializeAs_PartyEntityBaseInformation(ICustomDataInput &input) {
    this->_indexIdFunc(input);
    this->_entityModelIdFunc(input);
    this->entityLook.deserialize(input);
}

void PartyEntityBaseInformation::_indexIdFunc(ICustomDataInput &input) {
    this->indexId = input.readByte();

}

void PartyEntityBaseInformation::_entityModelIdFunc(ICustomDataInput &input) {
    this->entityModelId = input.readByte();

}

