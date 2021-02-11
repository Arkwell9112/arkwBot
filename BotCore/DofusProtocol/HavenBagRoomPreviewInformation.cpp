#include "HavenBagRoomPreviewInformation.h"

void HavenBagRoomPreviewInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HavenBagRoomPreviewInformation(input);
}

void HavenBagRoomPreviewInformation::deserializeAs_HavenBagRoomPreviewInformation(ICustomDataInput &input) {
    this->_roomIdFunc(input);
    this->_themeIdFunc(input);
}

void HavenBagRoomPreviewInformation::_roomIdFunc(ICustomDataInput &input) {
    this->roomId = input.readUnsignedByte();

}

void HavenBagRoomPreviewInformation::_themeIdFunc(ICustomDataInput &input) {
    this->themeId = input.readByte();
}

