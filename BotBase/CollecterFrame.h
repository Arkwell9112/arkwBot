#ifndef ARKWBOT_COLLECTERFRAME_H
#define ARKWBOT_COLLECTERFRAME_H

#include "BasicModules/WorldPathModule.h"
#include "BasicModules/FullInteractModule.h"
#include "BasicModules/BankModule.h"
#include "BasicModules/ZaapModule.h"
#include "BasicModules/ChangeMapModule.h"

class CollecterFrame {
public:
    static CollecterFrame &getInstance();

    void init();

private:
    CollecterFrame() : fullInteractModule(worldPathModule), bankModule(worldPathModule), zaapModule(worldPathModule),
                       changeMapModule(worldPathModule) {};

    static CollecterFrame singleton;

    WorldPathModule worldPathModule;

    FullInteractModule fullInteractModule;

    BankModule bankModule;

    ZaapModule zaapModule;

    ChangeMapModule changeMapModule;
};

#endif //ARKWBOT_COLLECTERFRAME_H