#include "../IO/BooleanByteWrapper.h"
#include "MountClientData.h"

void MountClientData::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MountClientData(input);
}

void MountClientData::deserializeAs_MountClientData(ICustomDataInput &input) {
    unsigned int _val3 = 0;
    unsigned int _val4 = 0;
    ObjectEffectInteger _item34;
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_modelFunc(input);
    unsigned int _ancestorLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _ancestorLen; _i3++) {
        _val3 = input.readInt();

        this->ancestor.push_back(_val3);
    }
    unsigned int _behaviorsLen = input.readUnsignedShort();
    for (unsigned int _i4 = 0; _i4 < _behaviorsLen; _i4++) {
        _val4 = input.readInt();

        this->behaviors.push_back(_val4);
    }
    this->_nameFunc(input);
    this->_ownerIdFunc(input);
    this->_experienceFunc(input);
    this->_experienceForLevelFunc(input);
    this->_experienceForNextLevelFunc(input);
    this->_levelFunc(input);
    this->_maxPodsFunc(input);
    this->_staminaFunc(input);
    this->_staminaMaxFunc(input);
    this->_maturityFunc(input);
    this->_maturityForAdultFunc(input);
    this->_energyFunc(input);
    this->_energyMaxFunc(input);
    this->_serenityFunc(input);
    this->_aggressivityMaxFunc(input);
    this->_serenityMaxFunc(input);
    this->_loveFunc(input);
    this->_loveMaxFunc(input);
    this->_fecondationTimeFunc(input);
    this->_boostLimiterFunc(input);
    this->_boostMaxFunc(input);
    this->_reproductionCountFunc(input);
    this->_reproductionCountMaxFunc(input);
    this->_harnessGIDFunc(input);
    unsigned int _effectListLen = input.readUnsignedShort();
    for (unsigned int _i34 = 0; _i34 < _effectListLen; _i34++) {
        _item34.deserialize(input);
        this->effectList.push_back(_item34);
    }
}

void MountClientData::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->isRideable = BooleanByteWrapper::getFlag(_box0, 1);
    this->isWild = BooleanByteWrapper::getFlag(_box0, 2);
    this->isFecondationReady = BooleanByteWrapper::getFlag(_box0, 3);
    this->useHarnessColors = BooleanByteWrapper::getFlag(_box0, 4);
}

void MountClientData::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void MountClientData::_modelFunc(ICustomDataInput &input) {
    this->model = input.readVarUhInt();

}

void MountClientData::_ancestorFunc(ICustomDataInput &input) {
    unsigned int _val = input.readInt();

    this->ancestor.push_back(_val);
}

void MountClientData::_behaviorsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readInt();

    this->behaviors.push_back(_val);
}

void MountClientData::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void MountClientData::_ownerIdFunc(ICustomDataInput &input) {
    this->ownerId = input.readInt();

}

void MountClientData::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhLong();

}

void MountClientData::_experienceForLevelFunc(ICustomDataInput &input) {
    this->experienceForLevel = input.readVarUhLong();

}

void MountClientData::_experienceForNextLevelFunc(ICustomDataInput &input) {
    this->experienceForNextLevel = input.readDouble();

}

void MountClientData::_levelFunc(ICustomDataInput &input) {
    this->level = input.readByte();

}

void MountClientData::_maxPodsFunc(ICustomDataInput &input) {
    this->maxPods = input.readVarUhInt();

}

void MountClientData::_staminaFunc(ICustomDataInput &input) {
    this->stamina = input.readVarUhInt();

}

void MountClientData::_staminaMaxFunc(ICustomDataInput &input) {
    this->staminaMax = input.readVarUhInt();

}

void MountClientData::_maturityFunc(ICustomDataInput &input) {
    this->maturity = input.readVarUhInt();

}

void MountClientData::_maturityForAdultFunc(ICustomDataInput &input) {
    this->maturityForAdult = input.readVarUhInt();

}

void MountClientData::_energyFunc(ICustomDataInput &input) {
    this->energy = input.readVarUhInt();

}

void MountClientData::_energyMaxFunc(ICustomDataInput &input) {
    this->energyMax = input.readVarUhInt();

}

void MountClientData::_serenityFunc(ICustomDataInput &input) {
    this->serenity = input.readInt();
}

void MountClientData::_aggressivityMaxFunc(ICustomDataInput &input) {
    this->aggressivityMax = input.readInt();
}

void MountClientData::_serenityMaxFunc(ICustomDataInput &input) {
    this->serenityMax = input.readVarUhInt();

}

void MountClientData::_loveFunc(ICustomDataInput &input) {
    this->love = input.readVarUhInt();

}

void MountClientData::_loveMaxFunc(ICustomDataInput &input) {
    this->loveMax = input.readVarUhInt();

}

void MountClientData::_fecondationTimeFunc(ICustomDataInput &input) {
    this->fecondationTime = input.readInt();
}

void MountClientData::_boostLimiterFunc(ICustomDataInput &input) {
    this->boostLimiter = input.readInt();

}

void MountClientData::_boostMaxFunc(ICustomDataInput &input) {
    this->boostMax = input.readDouble();

}

void MountClientData::_reproductionCountFunc(ICustomDataInput &input) {
    this->reproductionCount = input.readInt();
}

void MountClientData::_reproductionCountMaxFunc(ICustomDataInput &input) {
    this->reproductionCountMax = input.readVarUhInt();

}

void MountClientData::_harnessGIDFunc(ICustomDataInput &input) {
    this->harnessGID = input.readVarUhShort();

}

void MountClientData::_effectListFunc(ICustomDataInput &input) {
    ObjectEffectInteger _item;
    _item.deserialize(input);
    this->effectList.push_back(_item);
}

