#ifndef ARKWBOT_BANKMODULE_H
#define ARKWBOT_BANKMODULE_H

#include "StateModule.h"

class BankModule : public StateModule {
public:
    explicit BankModule(ModuleInterface &parent) : StateModule(parent), _path(nullptr) {
        std::string stateName = "Begin";
        std::string operatorName = "CurrentMapMessage";
        std::string result = "InBank";
        addOperation(stateName, operatorName, result);
        std::vector<unsigned int> actionParams = {0};
        addAction(stateName, actionParams);
        stateName = "InBank";
        operatorName = "NpcDialogQuestionMessage";
        result = "Question";
        addOperation(stateName, operatorName, result);
        actionParams = {1};
        addAction(stateName, actionParams);
        stateName = "Question";
        operatorName = "ExchangeStartedWithStorageMessage";
        result = "Exchange";
        addOperation(stateName, operatorName, result);
        actionParams = {2};
        addAction(stateName, actionParams);
        stateName = "Exchange";
        operatorName = "ExchangeObjectTransfertAllFromInvMessage";
        result = "Exchanged";
        addOperation(stateName, operatorName, result);
        actionParams = {3, 4};
        addAction(stateName, actionParams);
        stateName = "Exchanged";
        operatorName = "ExchangeLeaveMessage";
        result = "Left";
        addOperation(stateName, operatorName, result);
        actionParams = {5};
        addAction(stateName, actionParams);
        stateName = "Left";
        operatorName = "CurrentMapMessage";
        result = "End";
        addOperation(stateName, operatorName, result);
        actionParams = {6};
        addAction(stateName, actionParams);
    };

    void init(WorldPath &path, const MapContextModule &contextModule) override;

protected:
    void uninit() override;

private:
    WorldPath *_path;
};

#endif //ARKWBOT_BANKMODULE_H