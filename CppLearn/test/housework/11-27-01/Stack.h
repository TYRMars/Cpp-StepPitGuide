//
// Created by zhangjianan on 2017/11/27.
//

#ifndef INC_11_27_01_STACK_H
#define INC_11_27_01_STACK_H

#include <iostream>
#include <vector>

using namespace std;

const int MaxSize = 100;

class Stack
{
private:
    vector<int> list;
    int top;
    int list_length;

public:
    Stack()
    {
        vector<int> list (MaxSize);
        list_length = -1;
        top=-1;
        cout << "Stack构造函数" << endl;
    }
    ~Stack()
    {
        cout << "Stack析构函数" << endl;
    }
    void Display();
    //入栈
    void push(int elem);
    //出栈
    int pop();
    //清空栈
    void clear();
    //获取栈顶元素
    int peek();
    //判断栈是否为空
    bool isEmpty();
    //判断栈是否满
    bool isFull();
};

void Stack::Display()
{
    for (int i = list_length; i >= 0; i--) {
        cout << i+1 << " " <<list[i] << endl;
    }
    cout << endl;
}


void Stack::push(int elem)
{
    if(top==MaxSize-1)
    {
        cout<<"It is full, can not push !!!"<<endl;
        return;
    }
    list.push_back(elem);
    top++;
    list_length++;
}

int Stack::pop()
{
    int tmp=top;
    if(isEmpty())
    {
        cout<<"It is empty, can not pop !!!"<<endl;
        return 0;
    }
    top--;
    list_length--;
    return list[tmp];
}

void Stack::clear()
{
    list_length = 0;
    top=-1;
}

int Stack::peek()
{
    if(isEmpty())
    {
        cout<<"It is empty, can not pop !!!"<<endl;
        return 0;
    }
    return list[top];
}

bool Stack::isEmpty()
{
    return top==0?true:false;
}

bool Stack::isFull()
{
    return top >= MaxSize-1 ? true: false;
}
#endif //INC_11_27_01_STACK_H
