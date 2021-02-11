#include "Version.h"

void Version::deserialize(ICustomDataInput &input) {
    this->deserializeAs_Version(input);
}

void Version::deserializeAs_Version(ICustomDataInput &input) {
    this->_majorFunc(input);
    this->_minorFunc(input);
    this->_codeFunc(input);
    this->_buildFunc(input);
    this->_buildTypeFunc(input);
}

void Version::_majorFunc(ICustomDataInput &input) {
    this->major = input.readByte();

}

void Version::_minorFunc(ICustomDataInput &input) {
    this->minor = input.readByte();

}

void Version::_codeFunc(ICustomDataInput &input) {
    this->code = input.readByte();

}

void Version::_buildFunc(ICustomDataInput &input) {
    this->build = input.readInt();

}

void Version::_buildTypeFunc(ICustomDataInput &input) {
    this->buildType = input.readByte();

}

