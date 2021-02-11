#include "TrustCertificate.h"

void TrustCertificate::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TrustCertificate(input);
}

void TrustCertificate::deserializeAs_TrustCertificate(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_hashFunc(input);
}

void TrustCertificate::_idFunc(ICustomDataInput &input) {
    this->id = input.readInt();

}

void TrustCertificate::_hashFunc(ICustomDataInput &input) {
    this->hash = input.readUTF();
}

