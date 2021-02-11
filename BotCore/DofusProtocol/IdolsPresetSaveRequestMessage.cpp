#include "IdolsPresetSaveRequestMessage.h"

void IdolsPresetSaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolsPresetSaveRequestMessage(input);
}

void IdolsPresetSaveRequestMessage::deserializeAs_IdolsPresetSaveRequestMessage(ICustomDataInput &input) {
    IconPresetSaveRequestMessage::deserialize(input);
}

