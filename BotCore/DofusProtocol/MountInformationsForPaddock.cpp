#include "MountInformationsForPaddock.h"

void MountInformationsForPaddock::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountInformationsForPaddock(input);
}

void MountInformationsForPaddock::deserializeAs_MountInformationsForPaddock(ICustomDataInput &input) {
    this->_modelIdFunc(input);
    this->_nameFunc(input);
    this->_ownerNameFunc(input);
}

void MountInformationsForPaddock::_modelIdFunc(ICustomDataInput &input) {
    this->modelId = input.readVarUhShort();

}

void MountInformationsForPaddock::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void MountInformationsForPaddock::_ownerNameFunc(ICustomDataInput &input) {
    this->ownerName = input.readUTF();
}

