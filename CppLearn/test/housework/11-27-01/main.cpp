#include <iostream>
#include "Stack.h"

int main() {
    Stack Stack_one;
    Stack_one.push(1);
    Stack_one.push(1);
    Stack_one.Display();
    Stack_one.push(2);
    Stack_one.push(3);
    Stack_one.push(2);
    Stack_one.push(3);
    Stack_one.Display();
    Stack_one.pop();
    Stack_one.Display();
}