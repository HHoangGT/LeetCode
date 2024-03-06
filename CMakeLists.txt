cmake_minimum_required(VERSION 3.27)
project(LeetCode)

set(CMAKE_CXX_STANDARD 14)

include_directories(LeetCode)
include_directories(libs)

add_executable(LeetCode
        LeetCode/DailyTemperature739.h
        LeetCode/DivideArrayIntoArrays2966.h
        LeetCode/FirstPalindromicString2108.h
        LeetCode/FirstUniqueChar387.h
        LeetCode/GroupsAnagrams49.h
        LeetCode/MajorityElement169.h
        LeetCode/PartionArrayForMaxSum1043.h
        LeetCode/ReversePolish150.h
        LeetCode/SequentialDigits1291.h
        LeetCode/SortCharsByFrequency451.h
        libs/myLib.h
        libs/template.h
        main.cpp
        LeetCode/MaximumOddBinaryNumber2864.h
        LeetCode/SquareOfSortedArray977.h
        LeetCode/RemoveNthNodeFromEndOfList19.h
        LeetCode/MinimunLengthOfString1750.h
        LeetCode/LinkedListCycle141.h)
