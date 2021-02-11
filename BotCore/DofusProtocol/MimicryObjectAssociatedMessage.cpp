#include "MimicryObjectAssociatedMessage.h"

void MimicryObjectAssociatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MimicryObjectAssociatedMessage(input);
}

void MimicryObjectAssociatedMessage::deserializeAs_MimicryObjectAssociatedMessage(ICustomDataInput &input) {
    SymbioticObjectAssociatedMessage::deserialize(input);
}

