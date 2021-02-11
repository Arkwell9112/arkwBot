#include "IndexedEntityLook.h"

void IndexedEntityLook::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IndexedEntityLook(input);
}

void IndexedEntityLook::deserializeAs_IndexedEntityLook(ICustomDataInput &input) {
    this->look.deserialize(input);
    this->_indexFunc(input);
}

void IndexedEntityLook::_indexFunc(ICustomDataInput &input) {
    this->index = input.readByte();

}

