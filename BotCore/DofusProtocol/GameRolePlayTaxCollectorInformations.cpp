#include "../ProtocolTypeManager.h"
#include "GameRolePlayTaxCollectorInformations.h"

void GameRolePlayTaxCollectorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayTaxCollectorInformations(input);
}

void GameRolePlayTaxCollectorInformations::deserializeAs_GameRolePlayTaxCollectorInformations(ICustomDataInput &input) {
    GameRolePlayActorInformations::deserialize(input);
    unsigned int _id1 = input.readUnsignedShort();
    this->identification = ProtocolTypeManager::getObject<TaxCollectorStaticInformations>(input, _id1);
    this->_guildLevelFunc(input);
    this->_taxCollectorAttackFunc(input);
}

void GameRolePlayTaxCollectorInformations::_guildLevelFunc(ICustomDataInput &input) {
    this->guildLevel = input.readUnsignedByte();

}

void GameRolePlayTaxCollectorInformations::_taxCollectorAttackFunc(ICustomDataInput &input) {
    this->taxCollectorAttack = input.readInt();
}

