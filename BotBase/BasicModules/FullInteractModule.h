#ifndef ARKWBOT_FULLINTERACTMODULE_H
#define ARKWBOT_FULLINTERACTMODULE_H

#include "InteractModule.h"
#include "MapContextModule.h"
#include "WorldPathModuleInterface.h"

class FullInteractModule : public ModuleInterface, public WorldPathModuleInterface {
public:
    explicit FullInteractModule(ModuleInterface &_parent) : _contextModule(nullptr), elemPos(0), interactModule(*this),
                                                            parent(_parent), prevElemPos(-1) {};

    void init(WorldPath &path, const MapContextModule &contextModule) override;

    void moduleCallBack(void *child) override;

    void cancel() override;

private:
    void doNextElem();

    ModuleInterface &parent;

    const MapContextModule *_contextModule;

    unsigned int elemPos;

    int prevElemPos;

    InteractModule interactModule;
};

#endif //ARKWBOT_FULLINTERACTMODULE_H