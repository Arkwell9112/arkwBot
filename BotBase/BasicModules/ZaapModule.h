#ifndef ARKWBOT_ZAAPMODULE_H
#define ARKWBOT_ZAAPMODULE_H

#include "StateModule.h"

class ZaapModule : public StateModule {
public:
    explicit ZaapModule(ModuleInterface &parent) : StateModule(parent), _path(nullptr) {
        std::string stateName = "Begin";
        std::string operatorName = "ZaapDestinationsMessage";
        std::string result = "Zaaped";
        addOperation(stateName, operatorName, result);
        std::vector<unsigned int> actions = {0};
        addAction(stateName, actions);
        stateName = "Zaaped";
        operatorName = "CurrentMapMessage";
        result = "End";
        addOperation(stateName, operatorName, result);
        actions = {1, 2};
        addAction(stateName, actions);
    };

    void init(WorldPath &path, const MapContextModule &contextModule) override;

protected:
    void uninit() override;

private:
    WorldPath *_path;
};

#endif //ARKWBOT_ZAAPMODULE_H