#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

using namespace cocos2d;

class Student : public Ref {
public:
    
    //There is problem, it should be fixed in future.Don't use the enum class it will cause don't have any addition!
    enum EnumYourTestType
    {
        en_Your_Test,
    };

    enum Question
    {
        en_Question1,
    };
    
private:
    void GiveQuestion(Question *question);
};

#endif // __HELLOWORLD_SCENE_H__
