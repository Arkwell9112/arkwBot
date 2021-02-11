#include "../ProtocolTypeManager.h"
#include "CompassUpdateMessage.h"

void CompassUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CompassUpdateMessage(input);
}

void CompassUpdateMessage::deserializeAs_CompassUpdateMessage(ICustomDataInput &input) {
    this->_typeFunc(input);
    unsigned int _id2 = input.readUnsignedShort();
    this->coords = ProtocolTypeManager::getObject<MapCoordinates>(input, _id2);
}

void CompassUpdateMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

