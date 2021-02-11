#include "BotException.h"

BotException::BotException(int _code) : code(_code), message() {
    switch (code) {
        case 0:
            message = "IDataIO: Position not OK.";
            break;
        case 1:
            message = "ICustomDataInput: readVar not OK.";
            break;
        case 2:
            message = "Packet: realInstanceID is nullptr.";
            break;
        case 4:
            message = "ConfigManager: Message not found.";
            break;
        case 5:
            message = "MapPoint: Invalid CellID.";
            break;
        case 13:
            message = "ChangeMapModule: Invalid orientation.";
            break;
        case 14:
            message = "WorldPath: Position not found.";
            break;
        case 15:
            message = "Point: Impossible orientation.";
            break;
        case 16:
            message = "MapContext: Impossible point.";
            break;
        case 19:
            message = "FightContextModule: No move.";
            break;
    }
}

const std::string &BotException::getMessage() const {
    return message;
}