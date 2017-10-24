#include <iostream>
#include "score.h"

using namespace std;

int SysScore :: getTime()
{
    time_t now_time;
    now_time = time(NULL);
    int time = now_time;
    return  time;
}

int main()
{

}