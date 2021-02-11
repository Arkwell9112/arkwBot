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

class ProtocolTypeManager {
public:
    template<class Type>
    static Type getObject(ICustomDataInput &input, unsigned int id) {
        if (id == 9017) {
            CharacterMinimalPlusLookInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9272) {
            CharacterBaseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 213) {
            PartyMemberInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6321) {
            PartyMemberArenaInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7121) {
            PartyInvitationMemberInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5330) {
            CharacterHardcoreOrEpicInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3916) {
            CharacterMinimalGuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 300) {
            CharacterMinimalAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9668) {
            CharacterMinimalPlusLookAndGradeInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3023) {
            EntityDispositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6346) {
            IdentifiedEntityDispositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8186) {
            FightEntityDispositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6801) {
            AbstractSocialGroupInfos object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4801) {
            BasicGuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5897) {
            GuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9794) {
            GuildFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9940) {
            GuildInsiderFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 274) {
            GuildInAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8863) {
            AlliancedGuildFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1115) {
            BasicAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4955) {
            BasicNamedAllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9961) {
            AllianceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1553) {
            AllianceFactSheetInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1344) {
            GuildVersatileInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8832) {
            GuildInAllianceVersatileInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 325) {
            PrismSubareaEmptyInfo object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 946) {
            PrismGeolocalizedInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1525) {
            PrismInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1451) {
            AlliancePrismInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3742) {
            AllianceInsiderPrismInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4681) {
            FightTeamMemberInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4605) {
            FightTeamMemberCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9492) {
            FightTeamMemberWithAllianceCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1174) {
            FightTeamMemberTaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8154) {
            FightTeamMemberMonsterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4686) {
            FightTeamMemberEntityInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6438) {
            FightTeamInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2266) {
            FightAllianceTeamInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7930) {
            GameFightMinimalStats object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4441) {
            GameFightMinimalStatsPreparation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9494) {
            FightResultListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1126) {
            FightResultFighterListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2949) {
            FightResultTaxCollectorListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1038) {
            FightResultPlayerListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3438) {
            FightResultMutantListEntry object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1833) {
            FightResultAdditionalData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9936) {
            FightResultPvpData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5733) {
            FightResultExperienceData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5728) {
            AbstractFightDispellableEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2053) {
            FightTemporaryBoostEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3882) {
            FightTemporaryBoostStateEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 846) {
            FightTemporarySpellBoostEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6312) {
            FightTemporaryBoostWeaponDamagesEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2653) {
            FightTemporarySpellImmunityEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7490) {
            FightTriggeredEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6605) {
            ObjectEffect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5843) {
            ObjectEffectInteger object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7034) {
            ObjectEffectCreature object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1548) {
            ObjectEffectLadder object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5036) {
            ObjectEffectMinMax object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3785) {
            ObjectEffectDuration object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7628) {
            ObjectEffectString object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1846) {
            ObjectEffectDice object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5410) {
            ObjectEffectDate object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6975) {
            ObjectEffectMount object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8476) {
            UpdateMountCharacteristic object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3931) {
            UpdateMountBooleanCharacteristic object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8508) {
            UpdateMountIntegerCharacteristic object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1043) {
            Shortcut object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7541) {
            ShortcutObject object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2425) {
            ShortcutObjectPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5835) {
            ShortcutObjectIdolsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4505) {
            ShortcutObjectItem object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 571) {
            ShortcutSpell object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 879) {
            ShortcutSmiley object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3412) {
            ShortcutEmote object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3594) {
            ShortcutEntitiesPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2929) {
            Idol object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1051) {
            PartyIdol object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4690) {
            AchievementAchieved object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5008) {
            AchievementAchievedRewardable object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2408) {
            IgnoredInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8804) {
            IgnoredOnlineInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1820) {
            FriendInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5289) {
            FriendOnlineInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6697) {
            AcquaintanceInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2613) {
            AcquaintanceOnlineInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9044) {
            FriendSpouseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5625) {
            FriendSpouseOnlineInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7363) {
            InteractiveElementSkill object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7588) {
            InteractiveElementNamedSkill object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4976) {
            InteractiveElement object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4190) {
            InteractiveElementWithAgeBonus object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 869) {
            PartyEntityBaseInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6554) {
            PartyEntityMemberInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3206) {
            SkillActionDescription object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7758) {
            SkillActionDescriptionTimed object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7961) {
            SkillActionDescriptionCollect object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8200) {
            SkillActionDescriptionCraft object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9215) {
            HouseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8630) {
            AccountHouseInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6405) {
            HouseInformationsInside object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8727) {
            HouseInformationsForGuild object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4222) {
            HouseOnMapInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1681) {
            HouseInstanceInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3647) {
            HouseGuildedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3664) {
            PaddockBuyableInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 355) {
            PaddockGuildedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4155) {
            GameContextActorPositionInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6228) {
            GameContextActorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6298) {
            GameFightFighterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2640) {
            GameFightAIInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3277) {
            GameFightMonsterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4758) {
            GameFightMonsterWithAlignmentInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8882) {
            GameFightTaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5594) {
            GameFightFighterNamedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 201) {
            GameFightCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7640) {
            GameFightMutantInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8660) {
            GameFightEntityInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3191) {
            GameRolePlayActorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6486) {
            GameRolePlayNamedActorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1689) {
            GameRolePlayHumanoidInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1099) {
            GameRolePlayMutantInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3034) {
            GameRolePlayCharacterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6918) {
            GameRolePlayMountInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9317) {
            GameRolePlayMerchantInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 863) {
            GameRolePlayNpcInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3740) {
            GameRolePlayNpcWithQuestInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9292) {
            GameRolePlayGroupMonsterInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 521) {
            GameRolePlayGroupMonsterWaveInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8498) {
            GameRolePlayTreasureHintInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 487) {
            GameRolePlayTaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4866) {
            GameRolePlayPrismInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3053) {
            GameRolePlayPortalInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6717) {
            HumanInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4884) {
            HumanOption object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9970) {
            HumanOptionObjectUse object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4941) {
            HumanOptionAlliance object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5005) {
            HumanOptionGuild object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8260) {
            HumanOptionOrnament object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5243) {
            HumanOptionEmote object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7090) {
            HumanOptionTitle object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1429) {
            HumanOptionSkillUse object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7484) {
            HumanOptionFollowers object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3115) {
            TaxCollectorStaticInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5888) {
            TaxCollectorStaticExtendedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5143) {
            TaxCollectorInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9776) {
            TaxCollectorComplementaryInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1607) {
            TaxCollectorGuildInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2162) {
            TaxCollectorLootInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7974) {
            TaxCollectorWaitingForHelpInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5768) {
            GroupMonsterStaticInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7681) {
            GroupMonsterStaticInformationsWithAlternatives object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2413) {
            QuestActiveInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1795) {
            QuestActiveDetailedInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2312) {
            QuestObjectiveInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1770) {
            QuestObjectiveInformationsWithCompletion object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 259) {
            SpawnInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6339) {
            BaseSpawnMonsterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1659) {
            SpawnScaledMonsterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5401) {
            SpawnMonsterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5264) {
            SpawnCharacterInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2859) {
            SpawnCompanionInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2478) {
            GameContextBasicSpawnInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3995) {
            GameContextSummonsInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4298) {
            GameFightFighterLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 873) {
            GameFightFighterMonsterLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8213) {
            GameFightFighterNamedLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5566) {
            GameFightFighterTaxCollectorLightInformations object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3866) {
            GameFightFighterEntityLightInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5486) {
            MapCoordinates object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3427) {
            MapCoordinatesAndId object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8214) {
            MapCoordinatesExtended object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4804) {
            Preset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9903) {
            PresetsContainerPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7815) {
            IconNamedPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2124) {
            SpellsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7595) {
            ForgettableSpellsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3738) {
            StatsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2799) {
            IdolsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 527) {
            EntitiesPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2296) {
            FullStatsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2193) {
            ItemsPreset object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 2376) {
            TreasureHuntStep object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7529) {
            TreasureHuntStepFollowDirectionToPOI object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 5817) {
            TreasureHuntStepDig object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7770) {
            TreasureHuntStepFight object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9917) {
            TreasureHuntStepFollowDirectionToHint object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 3613) {
            TreasureHuntStepFollowDirection object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 4544) {
            PortalInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1023) {
            BreachBranch object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6573) {
            ExtendedBreachBranch object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 1746) {
            ExtendedLockedBreachBranch object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6393) {
            PlayerStatus object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 865) {
            PlayerStatusExtended object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8194) {
            ServerSessionConstant object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6149) {
            ServerSessionConstantString object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8729) {
            ServerSessionConstantInteger object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9780) {
            ServerSessionConstantLong object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8706) {
            StatisticData object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 8962) {
            StatisticDataInt object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 9517) {
            StatisticDataBoolean object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 760) {
            StatisticDataShort object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 134) {
            StatisticDataString object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 399) {
            StatisticDataByte object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 7486) {
            DebtInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
        if (id == 6089) {
            KamaDebtInformation object;
            object.deserialize(input);
            return *dynamic_cast<Type *>(&object);
        }
    }
};

#endif //ARKWBOT_PROTOCOLTYPEMANAGER_H