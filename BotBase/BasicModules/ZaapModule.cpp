#include "ZaapModule.h"

void ZaapModule::init(WorldPath &path, const MapContextModule &contextModule) {
    if (path.getPosition() == contextModule.getContext() && path.getPosition().getAction() == "zaap") {
        _path = &path;
        StateModule::init(path, contextModule);
        return;
    }
    parent.moduleCallBack(this);
}

void ZaapModule::uninit() {
    _path->nextPosition();
    _path->nextPosition();
    parent.moduleCallBack(this);
}