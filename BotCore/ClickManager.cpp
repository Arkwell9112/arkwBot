#include "ClickManager.h"
#include "ConfigManager.h"
#include "LogManager.h"

bool ClickManager::isFighting = false;

void ClickManager::click(const Point &point) {
    if (!isFighting) {
        subClick(point);
    }
}

void ClickManager::keybd(WORD key) {
    LogManager::getInstance().exLog("ClickManager: Keybd: " + std::to_string(key) + ".");
    INPUT inputs[2];
    inputs[0].type = INPUT_KEYBOARD;
    inputs[0].ki.dwFlags = 0;
    inputs[0].ki.wVk = key;
    inputs[0].ki.wScan = 0;
    inputs[0].ki.time = 0;
    inputs[0].ki.dwExtraInfo = 0;
    inputs[1].type = INPUT_KEYBOARD;
    inputs[1].ki.dwFlags = KEYEVENTF_KEYUP;
    inputs[1].ki.wVk = key;
    inputs[1].ki.wScan = 0;
    inputs[1].ki.time = 0;
    inputs[1].ki.dwExtraInfo = 0;
    SendInput(2, inputs, sizeof(INPUT));
}

void ClickManager::subClick(const Point &point) {
    LogManager::getInstance().exLog(
            "ClickManager: Click: " + std::to_string(point.getPosX()) + " " + std::to_string(point.getPosY()) + ".");
    INPUT inputs[3];
    inputs[0].type = INPUT_MOUSE;
    inputs[0].mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE;
    inputs[0].mi.dx = (point.getPosX() * 65535) / ConfigManager::getInstance().getScreenPoint(4).getPosX();
    inputs[0].mi.dy = (point.getPosY() * 65535) / ConfigManager::getInstance().getScreenPoint(4).getPosY();
    inputs[0].mi.dwExtraInfo = 0;
    inputs[0].mi.time = 0;
    inputs[0].mi.mouseData = 0;
    inputs[1].type = INPUT_MOUSE;
    inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
    inputs[1].mi.dx = 0;
    inputs[1].mi.dy = 0;
    inputs[1].mi.dwExtraInfo = 0;
    inputs[1].mi.time = 0;
    inputs[1].mi.mouseData = 0;
    inputs[2].type = INPUT_MOUSE;
    inputs[2].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    inputs[2].mi.dx = 0;
    inputs[2].mi.dy = 0;
    inputs[2].mi.dwExtraInfo = 0;
    inputs[2].mi.time = 0;
    inputs[2].mi.mouseData = 0;
    SendInput(3, inputs, sizeof(INPUT));
}

void ClickManager::toggleFighting() {
    isFighting = !isFighting;
}