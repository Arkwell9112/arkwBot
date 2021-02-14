#ifndef ARKWBOT_PROTOCOLTYPEMANAGER_H
#define ARKWBOT_PROTOCOLTYPEMANAGER_H

#include "DofusProtocol/CharacterMinimalPlusLookInformations.h"
#include "DofusProtocol/CharacterBaseInformations.h"
#include "DofusProtocol/PartyMemberInformations.h"
#include "DofusProtocol/PartyMemberArenaInformations.h"
#include "DofusProtocol/PartyInvitationMemberInformations.h"
#include "DofusProtocol/CharacterHardcoreOrEpicInformations.h"
#include "DofusProtocol/CharacterMinimalGuildInformations.h"
#include "DofusProtocol/CharacterMinimalAllianceInformations.h"
#include "DofusProtocol/CharacterMinimalPlusLookAndGradeInformations.h"
#include "DofusProtocol/EntityDispositionInformations.h"
#include "DofusProtocol/IdentifiedEntityDispositionInformations.h"
#include "DofusProtocol/FightEntityDispositionInformations.h"
#include "DofusProtocol/AbstractSocialGroupInfos.h"
#include "DofusProtocol/BasicGuildInformations.h"
#include "DofusProtocol/GuildInformations.h"
#include "DofusProtocol/GuildFactSheetInformations.h"
#include "DofusProtocol/GuildInsiderFactSheetInformations.h"
#include "DofusProtocol/GuildInAllianceInformations.h"
#include "DofusProtocol/AlliancedGuildFactSheetInformations.h"
#include "DofusProtocol/BasicAllianceInformations.h"
#include "DofusProtocol/BasicNamedAllianceInformations.h"
#include "DofusProtocol/AllianceInformations.h"
#include "DofusProtocol/AllianceFactSheetInformations.h"
#include "DofusProtocol/GuildVersatileInformations.h"
#include "DofusProtocol/GuildInAllianceVersatileInformations.h"
#include "DofusProtocol/PrismSubareaEmptyInfo.h"
#include "DofusProtocol/PrismGeolocalizedInformation.h"
#include "DofusProtocol/PrismInformation.h"
#include "DofusProtocol/AlliancePrismInformation.h"
#include "DofusProtocol/AllianceInsiderPrismInformation.h"
#include "DofusProtocol/FightTeamMemberInformations.h"
#include "DofusProtocol/FightTeamMemberCharacterInformations.h"
#include "DofusProtocol/FightTeamMemberWithAllianceCharacterInformations.h"
#include "DofusProtocol/FightTeamMemberTaxCollectorInformations.h"
#include "DofusProtocol/FightTeamMemberMonsterInformations.h"
#include "DofusProtocol/FightTeamMemberEntityInformation.h"
#include "DofusProtocol/FightTeamInformations.h"
#include "DofusProtocol/FightAllianceTeamInformations.h"
#include "DofusProtocol/GameFightMinimalStats.h"
#include "DofusProtocol/GameFightMinimalStatsPreparation.h"
#include "DofusProtocol/FightResultListEntry.h"
#include "DofusProtocol/FightResultFighterListEntry.h"
#include "DofusProtocol/FightResultTaxCollectorListEntry.h"
#include "DofusProtocol/FightResultPlayerListEntry.h"
#include "DofusProtocol/FightResultMutantListEntry.h"
#include "DofusProtocol/FightResultAdditionalData.h"
#include "DofusProtocol/FightResultPvpData.h"
#include "DofusProtocol/FightResultExperienceData.h"
#include "DofusProtocol/AbstractFightDispellableEffect.h"
#include "DofusProtocol/FightTemporaryBoostEffect.h"
#include "DofusProtocol/FightTemporaryBoostStateEffect.h"
#include "DofusProtocol/FightTemporarySpellBoostEffect.h"
#include "DofusProtocol/FightTemporaryBoostWeaponDamagesEffect.h"
#include "DofusProtocol/FightTemporarySpellImmunityEffect.h"
#include "DofusProtocol/FightTriggeredEffect.h"
#include "DofusProtocol/ObjectEffect.h"
#include "DofusProtocol/ObjectEffectInteger.h"
#include "DofusProtocol/ObjectEffectCreature.h"
#include "DofusProtocol/ObjectEffectLadder.h"
#include "DofusProtocol/ObjectEffectMinMax.h"
#include "DofusProtocol/ObjectEffectDuration.h"
#include "DofusProtocol/ObjectEffectString.h"
#include "DofusProtocol/ObjectEffectDice.h"
#include "DofusProtocol/ObjectEffectDate.h"
#include "DofusProtocol/ObjectEffectMount.h"
#include "DofusProtocol/UpdateMountCharacteristic.h"
#include "DofusProtocol/UpdateMountBooleanCharacteristic.h"
#include "DofusProtocol/UpdateMountIntegerCharacteristic.h"
#include "DofusProtocol/Shortcut.h"
#include "DofusProtocol/ShortcutObject.h"
#include "DofusProtocol/ShortcutObjectPreset.h"
#include "DofusProtocol/ShortcutObjectIdolsPreset.h"
#include "DofusProtocol/ShortcutObjectItem.h"
#include "DofusProtocol/ShortcutSpell.h"
#include "DofusProtocol/ShortcutSmiley.h"
#include "DofusProtocol/ShortcutEmote.h"
#include "DofusProtocol/ShortcutEntitiesPreset.h"
#include "DofusProtocol/Idol.h"
#include "DofusProtocol/PartyIdol.h"
#include "DofusProtocol/AchievementAchieved.h"
#include "DofusProtocol/AchievementAchievedRewardable.h"
#include "DofusProtocol/IgnoredInformations.h"
#include "DofusProtocol/IgnoredOnlineInformations.h"
#include "DofusProtocol/FriendInformations.h"
#include "DofusProtocol/FriendOnlineInformations.h"
#include "DofusProtocol/AcquaintanceInformation.h"
#include "DofusProtocol/AcquaintanceOnlineInformation.h"
#include "DofusProtocol/FriendSpouseInformations.h"
#include "DofusProtocol/FriendSpouseOnlineInformations.h"
#include "DofusProtocol/InteractiveElementSkill.h"
#include "DofusProtocol/InteractiveElementNamedSkill.h"
#include "DofusProtocol/InteractiveElement.h"
#include "DofusProtocol/InteractiveElementWithAgeBonus.h"
#include "DofusProtocol/PartyEntityBaseInformation.h"
#include "DofusProtocol/PartyEntityMemberInformation.h"
#include "DofusProtocol/SkillActionDescription.h"
#include "DofusProtocol/SkillActionDescriptionTimed.h"
#include "DofusProtocol/SkillActionDescriptionCollect.h"
#include "DofusProtocol/SkillActionDescriptionCraft.h"
#include "DofusProtocol/HouseInformations.h"
#include "DofusProtocol/AccountHouseInformations.h"
#include "DofusProtocol/HouseInformationsInside.h"
#include "DofusProtocol/HouseInformationsForGuild.h"
#include "DofusProtocol/HouseOnMapInformations.h"
#include "DofusProtocol/HouseInstanceInformations.h"
#include "DofusProtocol/HouseGuildedInformations.h"
#include "DofusProtocol/PaddockBuyableInformations.h"
#include "DofusProtocol/PaddockGuildedInformations.h"
#include "DofusProtocol/GameContextActorPositionInformations.h"
#include "DofusProtocol/GameContextActorInformations.h"
#include "DofusProtocol/GameFightFighterInformations.h"
#include "DofusProtocol/GameFightAIInformations.h"
#include "DofusProtocol/GameFightMonsterInformations.h"
#include "DofusProtocol/GameFightMonsterWithAlignmentInformations.h"
#include "DofusProtocol/GameFightTaxCollectorInformations.h"
#include "DofusProtocol/GameFightFighterNamedInformations.h"
#include "DofusProtocol/GameFightCharacterInformations.h"
#include "DofusProtocol/GameFightMutantInformations.h"
#include "DofusProtocol/GameFightEntityInformation.h"
#include "DofusProtocol/GameRolePlayActorInformations.h"
#include "DofusProtocol/GameRolePlayNamedActorInformations.h"
#include "DofusProtocol/GameRolePlayHumanoidInformations.h"
#include "DofusProtocol/GameRolePlayMutantInformations.h"
#include "DofusProtocol/GameRolePlayCharacterInformations.h"
#include "DofusProtocol/GameRolePlayMountInformations.h"
#include "DofusProtocol/GameRolePlayMerchantInformations.h"
#include "DofusProtocol/GameRolePlayNpcInformations.h"
#include "DofusProtocol/GameRolePlayNpcWithQuestInformations.h"
#include "DofusProtocol/GameRolePlayGroupMonsterInformations.h"
#include "DofusProtocol/GameRolePlayGroupMonsterWaveInformations.h"
#include "DofusProtocol/GameRolePlayTreasureHintInformations.h"
#include "DofusProtocol/GameRolePlayTaxCollectorInformations.h"
#include "DofusProtocol/GameRolePlayPrismInformations.h"
#include "DofusProtocol/GameRolePlayPortalInformations.h"
#include "DofusProtocol/HumanInformations.h"
#include "DofusProtocol/HumanOption.h"
#include "DofusProtocol/HumanOptionObjectUse.h"
#include "DofusProtocol/HumanOptionAlliance.h"
#include "DofusProtocol/HumanOptionGuild.h"
#include "DofusProtocol/HumanOptionOrnament.h"
#include "DofusProtocol/HumanOptionEmote.h"
#include "DofusProtocol/HumanOptionTitle.h"
#include "DofusProtocol/HumanOptionSkillUse.h"
#include "DofusProtocol/HumanOptionFollowers.h"
#include "DofusProtocol/TaxCollectorStaticInformations.h"
#include "DofusProtocol/TaxCollectorStaticExtendedInformations.h"
#include "DofusProtocol/TaxCollectorInformations.h"
#include "DofusProtocol/TaxCollectorComplementaryInformations.h"
#include "DofusProtocol/TaxCollectorGuildInformations.h"
#include "DofusProtocol/TaxCollectorLootInformations.h"
#include "DofusProtocol/TaxCollectorWaitingForHelpInformations.h"
#include "DofusProtocol/GroupMonsterStaticInformations.h"
#include "DofusProtocol/GroupMonsterStaticInformationsWithAlternatives.h"
#include "DofusProtocol/QuestActiveInformations.h"
#include "DofusProtocol/QuestActiveDetailedInformations.h"
#include "DofusProtocol/QuestObjectiveInformations.h"
#include "DofusProtocol/QuestObjectiveInformationsWithCompletion.h"
#include "DofusProtocol/SpawnInformation.h"
#include "DofusProtocol/BaseSpawnMonsterInformation.h"
#include "DofusProtocol/SpawnScaledMonsterInformation.h"
#include "DofusProtocol/SpawnMonsterInformation.h"
#include "DofusProtocol/SpawnCharacterInformation.h"
#include "DofusProtocol/SpawnCompanionInformation.h"
#include "DofusProtocol/GameContextBasicSpawnInformation.h"
#include "DofusProtocol/GameContextSummonsInformation.h"
#include "DofusProtocol/GameFightFighterLightInformations.h"
#include "DofusProtocol/GameFightFighterMonsterLightInformations.h"
#include "DofusProtocol/GameFightFighterNamedLightInformations.h"
#include "DofusProtocol/GameFightFighterTaxCollectorLightInformations.h"
#include "DofusProtocol/GameFightFighterEntityLightInformation.h"
#include "DofusProtocol/MapCoordinates.h"
#include "DofusProtocol/MapCoordinatesAndId.h"
#include "DofusProtocol/MapCoordinatesExtended.h"
#include "DofusProtocol/Preset.h"
#include "DofusProtocol/PresetsContainerPreset.h"
#include "DofusProtocol/IconNamedPreset.h"
#include "DofusProtocol/SpellsPreset.h"
#include "DofusProtocol/ForgettableSpellsPreset.h"
#include "DofusProtocol/StatsPreset.h"
#include "DofusProtocol/IdolsPreset.h"
#include "DofusProtocol/EntitiesPreset.h"
#include "DofusProtocol/FullStatsPreset.h"
#include "DofusProtocol/ItemsPreset.h"
#include "DofusProtocol/TreasureHuntStep.h"
#include "DofusProtocol/TreasureHuntStepFollowDirectionToPOI.h"
#include "DofusProtocol/TreasureHuntStepDig.h"
#include "DofusProtocol/TreasureHuntStepFight.h"
#include "DofusProtocol/TreasureHuntStepFollowDirectionToHint.h"
#include "DofusProtocol/TreasureHuntStepFollowDirection.h"
#include "DofusProtocol/PortalInformation.h"
#include "DofusProtocol/BreachBranch.h"
#include "DofusProtocol/ExtendedBreachBranch.h"
#include "DofusProtocol/ExtendedLockedBreachBranch.h"
#include "DofusProtocol/PlayerStatus.h"
#include "DofusProtocol/PlayerStatusExtended.h"
#include "DofusProtocol/ServerSessionConstant.h"
#include "DofusProtocol/ServerSessionConstantString.h"
#include "DofusProtocol/ServerSessionConstantInteger.h"
#include "DofusProtocol/ServerSessionConstantLong.h"
#include "DofusProtocol/StatisticData.h"
#include "DofusProtocol/StatisticDataInt.h"
#include "DofusProtocol/StatisticDataBoolean.h"
#include "DofusProtocol/StatisticDataShort.h"
#include "DofusProtocol/StatisticDataString.h"
#include "DofusProtocol/StatisticDataByte.h"
#include "DofusProtocol/DebtInformation.h"
#include "DofusProtocol/KamaDebtInformation.h"

#include "IO/ICustomDataInput.h"
#include "ConfigManager.h"

class ProtocolTypeManager {
public:
    template<class Type>
    static Type getObject(ICustomDataInput &input, unsigned int id) {
        if (ConfigManager::getInstance().getTypeName(id) == "CharacterMinimalPlusLookInformations") {
            CharacterMinimalPlusLookInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "CharacterBaseInformations") {
            CharacterBaseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PartyMemberInformations") {
            PartyMemberInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PartyMemberArenaInformations") {
            PartyMemberArenaInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PartyInvitationMemberInformations") {
            PartyInvitationMemberInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "CharacterHardcoreOrEpicInformations") {
            CharacterHardcoreOrEpicInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "CharacterMinimalGuildInformations") {
            CharacterMinimalGuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "CharacterMinimalAllianceInformations") {
            CharacterMinimalAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "CharacterMinimalPlusLookAndGradeInformations") {
            CharacterMinimalPlusLookAndGradeInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "EntityDispositionInformations") {
            EntityDispositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "IdentifiedEntityDispositionInformations") {
            IdentifiedEntityDispositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightEntityDispositionInformations") {
            FightEntityDispositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AbstractSocialGroupInfos") {
            AbstractSocialGroupInfos object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "BasicGuildInformations") {
            BasicGuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GuildInformations") {
            GuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GuildFactSheetInformations") {
            GuildFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GuildInsiderFactSheetInformations") {
            GuildInsiderFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GuildInAllianceInformations") {
            GuildInAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AlliancedGuildFactSheetInformations") {
            AlliancedGuildFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "BasicAllianceInformations") {
            BasicAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "BasicNamedAllianceInformations") {
            BasicNamedAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AllianceInformations") {
            AllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AllianceFactSheetInformations") {
            AllianceFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GuildVersatileInformations") {
            GuildVersatileInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GuildInAllianceVersatileInformations") {
            GuildInAllianceVersatileInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PrismSubareaEmptyInfo") {
            PrismSubareaEmptyInfo object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PrismGeolocalizedInformation") {
            PrismGeolocalizedInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PrismInformation") {
            PrismInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AlliancePrismInformation") {
            AlliancePrismInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AllianceInsiderPrismInformation") {
            AllianceInsiderPrismInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamMemberInformations") {
            FightTeamMemberInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamMemberCharacterInformations") {
            FightTeamMemberCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamMemberWithAllianceCharacterInformations") {
            FightTeamMemberWithAllianceCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamMemberTaxCollectorInformations") {
            FightTeamMemberTaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamMemberMonsterInformations") {
            FightTeamMemberMonsterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamMemberEntityInformation") {
            FightTeamMemberEntityInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTeamInformations") {
            FightTeamInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightAllianceTeamInformations") {
            FightAllianceTeamInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightMinimalStats") {
            GameFightMinimalStats object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightMinimalStatsPreparation") {
            GameFightMinimalStatsPreparation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultListEntry") {
            FightResultListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultFighterListEntry") {
            FightResultFighterListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultTaxCollectorListEntry") {
            FightResultTaxCollectorListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultPlayerListEntry") {
            FightResultPlayerListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultMutantListEntry") {
            FightResultMutantListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultAdditionalData") {
            FightResultAdditionalData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultPvpData") {
            FightResultPvpData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightResultExperienceData") {
            FightResultExperienceData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AbstractFightDispellableEffect") {
            AbstractFightDispellableEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTemporaryBoostEffect") {
            FightTemporaryBoostEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTemporaryBoostStateEffect") {
            FightTemporaryBoostStateEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTemporarySpellBoostEffect") {
            FightTemporarySpellBoostEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTemporaryBoostWeaponDamagesEffect") {
            FightTemporaryBoostWeaponDamagesEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTemporarySpellImmunityEffect") {
            FightTemporarySpellImmunityEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FightTriggeredEffect") {
            FightTriggeredEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffect") {
            ObjectEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectInteger") {
            ObjectEffectInteger object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectCreature") {
            ObjectEffectCreature object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectLadder") {
            ObjectEffectLadder object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectMinMax") {
            ObjectEffectMinMax object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectDuration") {
            ObjectEffectDuration object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectString") {
            ObjectEffectString object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectDice") {
            ObjectEffectDice object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectDate") {
            ObjectEffectDate object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ObjectEffectMount") {
            ObjectEffectMount object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "UpdateMountCharacteristic") {
            UpdateMountCharacteristic object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "UpdateMountBooleanCharacteristic") {
            UpdateMountBooleanCharacteristic object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "UpdateMountIntegerCharacteristic") {
            UpdateMountIntegerCharacteristic object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "Shortcut") {
            Shortcut object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutObject") {
            ShortcutObject object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutObjectPreset") {
            ShortcutObjectPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutObjectIdolsPreset") {
            ShortcutObjectIdolsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutObjectItem") {
            ShortcutObjectItem object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutSpell") {
            ShortcutSpell object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutSmiley") {
            ShortcutSmiley object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutEmote") {
            ShortcutEmote object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ShortcutEntitiesPreset") {
            ShortcutEntitiesPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "Idol") {
            Idol object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PartyIdol") {
            PartyIdol object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AchievementAchieved") {
            AchievementAchieved object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AchievementAchievedRewardable") {
            AchievementAchievedRewardable object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "IgnoredInformations") {
            IgnoredInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "IgnoredOnlineInformations") {
            IgnoredOnlineInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FriendInformations") {
            FriendInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FriendOnlineInformations") {
            FriendOnlineInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AcquaintanceInformation") {
            AcquaintanceInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AcquaintanceOnlineInformation") {
            AcquaintanceOnlineInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FriendSpouseInformations") {
            FriendSpouseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FriendSpouseOnlineInformations") {
            FriendSpouseOnlineInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "InteractiveElementSkill") {
            InteractiveElementSkill object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "InteractiveElementNamedSkill") {
            InteractiveElementNamedSkill object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "InteractiveElement") {
            InteractiveElement object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "InteractiveElementWithAgeBonus") {
            InteractiveElementWithAgeBonus object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PartyEntityBaseInformation") {
            PartyEntityBaseInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PartyEntityMemberInformation") {
            PartyEntityMemberInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SkillActionDescription") {
            SkillActionDescription object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SkillActionDescriptionTimed") {
            SkillActionDescriptionTimed object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SkillActionDescriptionCollect") {
            SkillActionDescriptionCollect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SkillActionDescriptionCraft") {
            SkillActionDescriptionCraft object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HouseInformations") {
            HouseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "AccountHouseInformations") {
            AccountHouseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HouseInformationsInside") {
            HouseInformationsInside object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HouseInformationsForGuild") {
            HouseInformationsForGuild object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HouseOnMapInformations") {
            HouseOnMapInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HouseInstanceInformations") {
            HouseInstanceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HouseGuildedInformations") {
            HouseGuildedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PaddockBuyableInformations") {
            PaddockBuyableInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PaddockGuildedInformations") {
            PaddockGuildedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameContextActorPositionInformations") {
            GameContextActorPositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameContextActorInformations") {
            GameContextActorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterInformations") {
            GameFightFighterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightAIInformations") {
            GameFightAIInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightMonsterInformations") {
            GameFightMonsterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightMonsterWithAlignmentInformations") {
            GameFightMonsterWithAlignmentInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightTaxCollectorInformations") {
            GameFightTaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterNamedInformations") {
            GameFightFighterNamedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightCharacterInformations") {
            GameFightCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightMutantInformations") {
            GameFightMutantInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightEntityInformation") {
            GameFightEntityInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayActorInformations") {
            GameRolePlayActorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayNamedActorInformations") {
            GameRolePlayNamedActorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayHumanoidInformations") {
            GameRolePlayHumanoidInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayMutantInformations") {
            GameRolePlayMutantInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayCharacterInformations") {
            GameRolePlayCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayMountInformations") {
            GameRolePlayMountInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayMerchantInformations") {
            GameRolePlayMerchantInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayNpcInformations") {
            GameRolePlayNpcInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayNpcWithQuestInformations") {
            GameRolePlayNpcWithQuestInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayGroupMonsterInformations") {
            GameRolePlayGroupMonsterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayGroupMonsterWaveInformations") {
            GameRolePlayGroupMonsterWaveInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayTreasureHintInformations") {
            GameRolePlayTreasureHintInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayTaxCollectorInformations") {
            GameRolePlayTaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayPrismInformations") {
            GameRolePlayPrismInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameRolePlayPortalInformations") {
            GameRolePlayPortalInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanInformations") {
            HumanInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOption") {
            HumanOption object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionObjectUse") {
            HumanOptionObjectUse object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionAlliance") {
            HumanOptionAlliance object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionGuild") {
            HumanOptionGuild object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionOrnament") {
            HumanOptionOrnament object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionEmote") {
            HumanOptionEmote object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionTitle") {
            HumanOptionTitle object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionSkillUse") {
            HumanOptionSkillUse object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "HumanOptionFollowers") {
            HumanOptionFollowers object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorStaticInformations") {
            TaxCollectorStaticInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorStaticExtendedInformations") {
            TaxCollectorStaticExtendedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorInformations") {
            TaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorComplementaryInformations") {
            TaxCollectorComplementaryInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorGuildInformations") {
            TaxCollectorGuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorLootInformations") {
            TaxCollectorLootInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TaxCollectorWaitingForHelpInformations") {
            TaxCollectorWaitingForHelpInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GroupMonsterStaticInformations") {
            GroupMonsterStaticInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GroupMonsterStaticInformationsWithAlternatives") {
            GroupMonsterStaticInformationsWithAlternatives object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "QuestActiveInformations") {
            QuestActiveInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "QuestActiveDetailedInformations") {
            QuestActiveDetailedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "QuestObjectiveInformations") {
            QuestObjectiveInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "QuestObjectiveInformationsWithCompletion") {
            QuestObjectiveInformationsWithCompletion object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SpawnInformation") {
            SpawnInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "BaseSpawnMonsterInformation") {
            BaseSpawnMonsterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SpawnScaledMonsterInformation") {
            SpawnScaledMonsterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SpawnMonsterInformation") {
            SpawnMonsterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SpawnCharacterInformation") {
            SpawnCharacterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SpawnCompanionInformation") {
            SpawnCompanionInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameContextBasicSpawnInformation") {
            GameContextBasicSpawnInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameContextSummonsInformation") {
            GameContextSummonsInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterLightInformations") {
            GameFightFighterLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterMonsterLightInformations") {
            GameFightFighterMonsterLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterNamedLightInformations") {
            GameFightFighterNamedLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterTaxCollectorLightInformations") {
            GameFightFighterTaxCollectorLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "GameFightFighterEntityLightInformation") {
            GameFightFighterEntityLightInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "MapCoordinates") {
            MapCoordinates object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "MapCoordinatesAndId") {
            MapCoordinatesAndId object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "MapCoordinatesExtended") {
            MapCoordinatesExtended object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "Preset") {
            Preset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PresetsContainerPreset") {
            PresetsContainerPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "IconNamedPreset") {
            IconNamedPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "SpellsPreset") {
            SpellsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ForgettableSpellsPreset") {
            ForgettableSpellsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatsPreset") {
            StatsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "IdolsPreset") {
            IdolsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "EntitiesPreset") {
            EntitiesPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "FullStatsPreset") {
            FullStatsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ItemsPreset") {
            ItemsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TreasureHuntStep") {
            TreasureHuntStep object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TreasureHuntStepFollowDirectionToPOI") {
            TreasureHuntStepFollowDirectionToPOI object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TreasureHuntStepDig") {
            TreasureHuntStepDig object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TreasureHuntStepFight") {
            TreasureHuntStepFight object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TreasureHuntStepFollowDirectionToHint") {
            TreasureHuntStepFollowDirectionToHint object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "TreasureHuntStepFollowDirection") {
            TreasureHuntStepFollowDirection object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PortalInformation") {
            PortalInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "BreachBranch") {
            BreachBranch object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ExtendedBreachBranch") {
            ExtendedBreachBranch object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ExtendedLockedBreachBranch") {
            ExtendedLockedBreachBranch object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PlayerStatus") {
            PlayerStatus object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "PlayerStatusExtended") {
            PlayerStatusExtended object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ServerSessionConstant") {
            ServerSessionConstant object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ServerSessionConstantString") {
            ServerSessionConstantString object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ServerSessionConstantInteger") {
            ServerSessionConstantInteger object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "ServerSessionConstantLong") {
            ServerSessionConstantLong object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatisticData") {
            StatisticData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatisticDataInt") {
            StatisticDataInt object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatisticDataBoolean") {
            StatisticDataBoolean object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatisticDataShort") {
            StatisticDataShort object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatisticDataString") {
            StatisticDataString object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "StatisticDataByte") {
            StatisticDataByte object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "DebtInformation") {
            DebtInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (ConfigManager::getInstance().getTypeName(id) == "KamaDebtInformation") {
            KamaDebtInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
    }
};

#endif //ARKWBOT_PROTOCOLTYPEMANAGER_H