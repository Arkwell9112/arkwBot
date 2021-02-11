#include "../ProtocolTypeManager.h"
#include "HousePropertiesMessage.h"

void HousePropertiesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HousePropertiesMessage(input);
}

void HousePropertiesMessage::deserializeAs_HousePropertiesMessage(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    this->_houseIdFunc(input);
    unsigned int _doorsOnMapLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _doorsOnMapLen; _i2++) {
        _val2 = input.readInt();

        this->doorsOnMap.push_back(_val2);
    }
    unsigned int _id3 = input.readUnsignedShort();
    this->properties = ProtocolTypeManager::getObject<HouseInstanceInformations>(input, _id3);
}

void HousePropertiesMessage::_houseIdFunc(ICustomDataInput &input) {
    this->houseId = input.readVarUhInt();

}

void HousePropertiesMessage::_doorsOnMapFunc(ICustomDataInput &input) {
    unsigned int _val = input.readInt();

    this->doorsOnMap.push_back(_val);
}

