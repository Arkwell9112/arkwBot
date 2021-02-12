#ifndef ARKWBOT_CLICKMANAGER_H
#define ARKWBOT_CLICKMANAGER_H

#include "WorldTools/Point.h"
#include <windows.h>

class ClickManager {
public:
    static void click(const Point &point);

    static void keybd(WORD key);

    static void subClick(const Point &point);

    static void toggleFighting();

    static void subKeybd(WORD key);

private:
    static bool isFighting;
};

#endif //ARKWBOT_CLICKMANAGER_H