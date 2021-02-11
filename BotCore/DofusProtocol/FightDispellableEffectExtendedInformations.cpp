#include "../ProtocolTypeManager.h"
#include "FightDispellableEffectExtendedInformations.h"

void FightDispellableEffectExtendedInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightDispellableEffectExtendedInformations(input);
}

void FightDispellableEffectExtendedInformations::deserializeAs_FightDispellableEffectExtendedInformations(
        ICustomDataInput &input) {
    this->_actionIdFunc(input);
    this->_sourceIdFunc(input);
    unsigned int _id3 = input.readUnsignedShort();
    this->effect = ProtocolTypeManager::getObject<AbstractFightDispellableEffect>(input, _id3);
}

void FightDispellableEffectExtendedInformations::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readVarUhShort();

}

void FightDispellableEffectExtendedInformations::_sourceIdFunc(ICustomDataInput &input) {
    this->sourceId = input.readDouble();

}

