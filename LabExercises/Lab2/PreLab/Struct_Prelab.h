#include <iostream>
#include <string>

using namespace std;

// Exercise: 1
struct SCP
{
    // Student answer
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string *addendums;
    int numAddendums;
};

// Exercise: 2
void addAddendum(SCP &obj, string addendum)
{
    // Student answer
    string *newAddendums = new string[obj.numAddendums + 1];
    for (int i = 0; i < obj.numAddendums; i++)
    {
        newAddendums[i] = obj.addendums[i];
    }
    newAddendums[obj.numAddendums] = addendum;
    delete[] obj.addendums;
    obj.addendums = newAddendums;
    obj.numAddendums++;
}