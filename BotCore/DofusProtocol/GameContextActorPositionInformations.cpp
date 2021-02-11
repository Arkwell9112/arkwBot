#include "../ProtocolTypeManager.h"
#include "GameContextActorPositionInformations.h"

void GameContextActorPositionInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextActorPositionInformations(input);
}

void GameContextActorPositionInformations::deserializeAs_GameContextActorPositionInformations(ICustomDataInput &input) {
    this->_contextualIdFunc(input);
    unsigned int _id2 = input.readUnsignedShort();
    this->disposition = ProtocolTypeManager::getObject<EntityDispositionInformations>(input, _id2);
}

void GameContextActorPositionInformations::_contextualIdFunc(ICustomDataInput &input) {
    this->contextualId = input.readDouble();

}

