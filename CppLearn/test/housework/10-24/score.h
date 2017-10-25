//
// Created by zhangjianan on 2017/10/24.
//

#ifndef INC_10_24_SCORE_H
#define INC_10_24_SCORE_H

#include <string>
#include <vector>

using namespace std;

struct Students
{
    string stu_no;
    string stu_name;
    double highMath_score;
    double english_score;
    double computer_score;
    double all_score;
    double avg_score;
};

class SysScore {
private:
    vector<Students> scoreList;
    int createTime;
    string maker;
public:
    SysScore()
    {
        vector<Students> scoreList;
        int createTime = getTime();
        string maker = "";
    }
    ~SysScore();
    void init_table();
    int getTime();
    void init_input();
    void init_output();

};





#endif //INC_10_24_SCORE_H
