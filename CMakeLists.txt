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
        LeetCode/LinkedListCycle141.h
        LeetCode/IntersectionOfTwoArrays349.h
        LeetCode/CustomSortString791.h
        LeetCode/BinarySuabarrayWithSum930.h
        NAB/ReturnSmallestPositiveIntegerNotInArray.h
        NAB/Task1.h
        NAB/Task2.h
        NAB/Task3.h
        "LabExercises/Lab1/PreLab/Multi-dimensional Array_Prelab.h"
        LabExercises/Lab1/PreLab/ClassString_Prelab.h
        LabExercises/Lab1/PreLab/C-String_Prelab.h
        LabExercises/Lab1/PreLab/File_IO_Prelab.h
        LabExercises/Lab1/PreLab/Function_PreLab.h
        LabExercises/Lab1/InLab/C-String_Inlab.h
        LabExercises/Lab1/InLab/ClassString_Inlab.h
        "LabExercises/Lab1/InLab/Multi-dimensional Array_Inlab.h"
        "LabExercises/Lab1/InLab/File IO_Inlab.h"
        LabExercises/Lab1/InLab/Function_InLab.h
)
