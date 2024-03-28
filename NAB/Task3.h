//
// Created by Nguyen Huy Hoang on 27/3/24.
//

#ifndef LEETCODE_TASK3_H
#define LEETCODE_TASK3_H

#include "../libs/template.h"
#include <cmath>

int solution(int A, int B)
{
    if (A + B < 4)
        return 0;
    int sideLength = floor((A + B) / 4);
    int countSticks = 0;
    while (sideLength > 0)
    {
        countSticks = (int)(floor(A / sideLength) + floor(B / sideLength));
        if (countSticks == 4)
            break;
        sideLength--;
    }
    return sideLength;
}

#endif // LEETCODE_TASK3_H
