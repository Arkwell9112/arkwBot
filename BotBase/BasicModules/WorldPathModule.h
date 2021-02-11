#ifndef ARKWBOT_WORLDPATHMODULE_H
#define ARKWBOT_WORLDPATHMODULE_H

#include "../../BotCore/WorldTools/WorldPath.h"
#include "MapContextModule.h"
#include "../../BotCore/ModuleInterface.h"
#include "WorldPathModuleInterface.h"

class WorldPathModule : public ModuleInterface {
public:
    WorldPathModule() : isWaiting(false), contextModule(*this), isFirst(true), isPos(false), preModulePos(0),
                        postModulePos(0) {};

    void init();

    void addModule(WorldPathModuleInterface &module, bool isPost);

    void moduleCallBack(void *child) override;

private:
    void doPreModule();

    void doPostModule();

    bool isWaiting;

    bool isFirst;

    bool isPos;

    unsigned int preModulePos;

    unsigned int postModulePos;

    std::vector<WorldPathModuleInterface *> preModules;

    std::vector<WorldPathModuleInterface *> postModules;

    MapContextModule contextModule;

    WorldPath path;
};

#endif //ARKWBOT_WORLDPATHMODULE_H