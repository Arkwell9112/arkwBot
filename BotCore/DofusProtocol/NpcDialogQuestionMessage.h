#ifndef NPCDIALOGQUESTIONMESSAGE
#define NPCDIALOGQUESTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include <string>

class NpcDialogQuestionMessage : public NetworkInterface {
public:
    unsigned int messageId = 0;
    std::vector<std::string> dialogParams;
    std::vector<unsigned int> visibleReplies;
    unsigned int protocolId = 6760;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_NpcDialogQuestionMessage(ICustomDataInput &input);

    void _messageIdFunc(ICustomDataInput &input);

    void _dialogParamsFunc(ICustomDataInput &input);

    void _visibleRepliesFunc(ICustomDataInput &input);
};

#endif