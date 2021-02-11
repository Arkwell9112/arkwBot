#include "AtlasPointInformationsMessage.h"

void AtlasPointInformationsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AtlasPointInformationsMessage(input);
}

void AtlasPointInformationsMessage::deserializeAs_AtlasPointInformationsMessage(ICustomDataInput &input) {
    this->type.deserialize(input);
}

