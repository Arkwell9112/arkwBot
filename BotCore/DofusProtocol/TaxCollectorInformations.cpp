#include "../ProtocolTypeManager.h"
#include "TaxCollectorInformations.h"

void TaxCollectorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorInformations(input);
}

void TaxCollectorInformations::deserializeAs_TaxCollectorInformations(ICustomDataInput &input) {
    unsigned int _id10 = 0;
    TaxCollectorComplementaryInformations _item10;
    this->_uniqueIdFunc(input);
    this->_firtNameIdFunc(input);
    this->_lastNameIdFunc(input);
    this->additionalInfos.deserialize(input);
    this->_worldXFunc(input);
    this->_worldYFunc(input);
    this->_subAreaIdFunc(input);
    this->_stateFunc(input);
    this->look.deserialize(input);
    unsigned int _complementsLen = input.readUnsignedShort();
    for (unsigned int _i10 = 0; _i10 < _complementsLen; _i10++) {
        _id10 = input.readUnsignedShort();
        _item10 = ProtocolTypeManager::getObject<TaxCollectorComplementaryInformations>(input, _id10);
        this->complements.push_back(_item10);
    }
}

void TaxCollectorInformations::_uniqueIdFunc(ICustomDataInput &input) {
    this->uniqueId = input.readDouble();

}

void TaxCollectorInformations::_firtNameIdFunc(ICustomDataInput &input) {
    this->firtNameId = input.readVarUhShort();

}

void TaxCollectorInformations::_lastNameIdFunc(ICustomDataInput &input) {
    this->lastNameId = input.readVarUhShort();

}

void TaxCollectorInformations::_worldXFunc(ICustomDataInput &input) {
    this->worldX = input.readShort();

}

void TaxCollectorInformations::_worldYFunc(ICustomDataInput &input) {
    this->worldY = input.readShort();

}

void TaxCollectorInformations::_subAreaIdFunc(ICustomDataInput &input) {
    this->subAreaId = input.readVarUhShort();

}

void TaxCollectorInformations::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

void TaxCollectorInformations::_complementsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    TaxCollectorComplementaryInformations _item = ProtocolTypeManager::getObject<TaxCollectorComplementaryInformations>(
            input, _id);
    _item.deserialize(input);
    this->complements.push_back(_item);
}

