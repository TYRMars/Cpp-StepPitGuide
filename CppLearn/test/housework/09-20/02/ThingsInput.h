//
// Created by zhang on 2017/10/9.
//

#ifndef INC_02_THINGS_H
#define INC_02_THINGS_H

#include <iostream>
#include <fstream>
using namespace std;

class ThingsCreate
{
public:
    char sysID [10];//设备号
    char sysName [20];//设备名 char
    char sysClass;//设备种类（分为：实验设备、办公设备、教学设备）enum
    void Input(void);
};

void ThingsCreate::Input()
{
    cout << "请输入设备号:";
    cin >> sysID;
    cout << "请输入设备名:";
    cin >> sysName;
}

#endif //INC_02_THINGS_H
