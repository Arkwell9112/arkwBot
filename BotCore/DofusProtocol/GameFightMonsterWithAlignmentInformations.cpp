#include "GameFightMonsterWithAlignmentInformations.h"

void GameFightMonsterWithAlignmentInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightMonsterWithAlignmentInformations(input);
}

void GameFightMonsterWithAlignmentInformations::deserializeAs_GameFightMonsterWithAlignmentInformations(
        ICustomDataInput &input) {
    GameFightMonsterInformations::deserialize(input);
    this->alignmentInfos.deserialize(input);
}

