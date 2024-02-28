//
// Created by Nguyen Huy Hoang on 31/01/2024.
//

#ifndef CPP_PROJECTS_DAILYTEMPERATURE739_H
#define CPP_PROJECTS_DAILYTEMPERATURE739_H

#include "../libs/template.h"
#include "../libs/myLib.h"

class DailyTemperature {
private:
    MyStack<int> *myStack = new MyStack<int>();

public:
    ~DailyTemperature() {
        delete myStack;
    }

    vector<int> dailyTemperatures(vector<int> &temperatures) {
        vector<int> result(temperatures.size(), 0);
        for (int i = 0; i < temperatures.size(); i++) {
            while (!myStack->empty() and temperatures[myStack->getDataOut()] < temperatures[i]) {
                result[myStack->getDataOut()] = i - myStack->getDataOut();
                myStack->pop();
            }
            myStack->push(i);
        }
        return result;
    }
};

#endif // CPP_PROJECTS_DAILYTEMPERATURE739_H
