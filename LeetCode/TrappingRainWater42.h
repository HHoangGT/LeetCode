#ifndef LEETCODE_TRAPPINGRAINWATER42_H
#define LEETCODE_TRAPPINGRAINWATER42_H

#include "../libs/template.h"

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int sum = 0, n = height.size();
        int leftMax = height[0], rightMax = height[n - 1];
        int left = 0, right = n - 1;
        while (left < right)
        {
            if (height[left] < height[right])
            {
                if (height[left] >= leftMax)
                    leftMax = height[left];
                else
                    sum += leftMax - height[left];
                left++;
            }
            else
            {
                if (height[right] >= rightMax)
                    rightMax = height[right];
                else
                    sum += rightMax - height[right];
                right--;
            }
        }
        return sum;
    }
};

#endif // LEETCODE_TRAPPINGRAINWATER42_H