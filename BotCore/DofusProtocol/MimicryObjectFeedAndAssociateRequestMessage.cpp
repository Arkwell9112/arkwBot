#include "MimicryObjectFeedAndAssociateRequestMessage.h"

void MimicryObjectFeedAndAssociateRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MimicryObjectFeedAndAssociateRequestMessage(input);
}

void MimicryObjectFeedAndAssociateRequestMessage::deserializeAs_MimicryObjectFeedAndAssociateRequestMessage(
        ICustomDataInput &input) {
    SymbioticObjectAssociateRequestMessage::deserialize(input);
    this->_foodUIDFunc(input);
    this->_foodPosFunc(input);
    this->_previewFunc(input);
}

void MimicryObjectFeedAndAssociateRequestMessage::_foodUIDFunc(ICustomDataInput &input) {
    this->foodUID = input.readVarUhInt();

}

void MimicryObjectFeedAndAssociateRequestMessage::_foodPosFunc(ICustomDataInput &input) {
    this->foodPos = input.readUnsignedByte();

}

void MimicryObjectFeedAndAssociateRequestMessage::_previewFunc(ICustomDataInput &input) {
    this->preview = input.readBoolean();
}

