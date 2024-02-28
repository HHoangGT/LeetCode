//
// Created by hoang on 1/30/2024.
//

#ifndef CPP_PROJECTS_REVERSEPOLISH150_H
#define CPP_PROJECTS_REVERSEPOLISH150_H

#include "../libs/template.h"
#include "../libs/myLib.h"

class ReversePolish {
private:
    MyStack<int> *myStack = new MyStack<int>();

    static int Calculating(int a, int b, char opr) {
        switch (opr) {
            case '+':
                return a + b;
            case '-':
                return a - b;
            case '*':
                return a * b;
            case '/':
                return a / b;
            default:
                break;
        }
        return -1;
    }

public:
    ~ReversePolish() {
        delete myStack;
    }

    int evalRPN(vector<string> &tokens) {
        int value = 0;
        for (auto &token: tokens) {
            if (token.size() == 1 && token[0] < 48) {
                int num2 = myStack->pop();
                int num1 = myStack->pop();
                int new_num = Calculating(num1, num2, token[0]);
                myStack->push(new_num);
            } else {
                myStack->push(stoi(token));
            }
        }
        value = myStack->pop();
        return value;
    }
};

#endif // CPP_PROJECTS_REVERSEPOLISH150_H
