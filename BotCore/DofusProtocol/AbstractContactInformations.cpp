#include "AbstractContactInformations.h"

void AbstractContactInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractContactInformations(input);
}

void AbstractContactInformations::deserializeAs_AbstractContactInformations(ICustomDataInput &input) {
    this->_accountIdFunc(input);
    this->_accountNameFunc(input);
}

void AbstractContactInformations::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

void AbstractContactInformations::_accountNameFunc(ICustomDataInput &input) {
    this->accountName = input.readUTF();
}

