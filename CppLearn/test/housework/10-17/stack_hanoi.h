//
// Created by zhangjianan on 2017/10/17.
//

#ifndef INC_10_17_STACK_HANOI_H
#define INC_10_17_STACK_HANOI_H

#include <stack>

using namespace std;

class StackHanoi
{
public:
    stack<int> S1,S2,S3;
    typedef stack<int> StackList;
    void move(StackList& a,StackList& b);
    void hanoi(int n,StackList& A,StackList& B,StackList& C);
    void StackDisplay(stack<int> a,stack<int> b,stack<int> c);

    void is_empty(stack<int> s);
    void Init_Hanoi(int n);
};

#endif //INC_10_17_STACK_HANOI_H
