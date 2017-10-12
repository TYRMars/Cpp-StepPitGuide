//
// Created by zhang on 2017/10/9.
//

#ifndef INC_02_THINGS_H
#define INC_02_THINGS_H

#include <string>

using namespace std;

class ThingsCreate
{
public:
    string sysID;//设备号
    string sysName;//设备名 char
    string sysClass;//设备种类（分为：实验设备、办公设备、教学设备）enum
    char sysType;
    void InputIn();
    void OutputIn();
    void OutputOut();
    int SystemInit();
};



#endif //INC_02_THINGS_H
