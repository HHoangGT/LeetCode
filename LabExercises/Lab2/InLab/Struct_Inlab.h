#include <iostream>

using namespace std;

// Exercise 1
struct SCP
{
    int id;
    int objClass;
    string speConProcedures;
    string description;
    string *addendums;
    int numAddendums;
};

SCP createSCP(int id, int objClass, string speConProcedures, string description, string *addendums, int numAddendums)
{
    // Student answer
    SCP scp;
    scp.id = id;
    scp.objClass = objClass;
    scp.speConProcedures = speConProcedures;
    scp.description = description;
    scp.addendums = addendums;
    scp.numAddendums = numAddendums;
    return scp;
}

// Exercise 2
string convertToString(SCP obj)
{
    string result = "";
    result += "Item #: SCP-";
    result += (obj.id < 100 ? (obj.id < 10 ? "00" : "0") : "") + std::to_string(obj.id) + "\n";

    std::string classString;
    switch (obj.objClass)
    {
    case 0:
        classString = "Safe";
        break;
    case 1:
        classString = "Euclid";
        break;
    case 2:
        classString = "Keter";
        break;
    default:
        classString = "Unknown";
        break;
    }
    result += "Object Class: " + classString + "\n";

    result += "Special Containment Procedures: " + obj.speConProcedures + "\n";
    result += "Description: " + obj.description + "\n";

    for (int i = 0; i < obj.numAddendums; i++)
    {
        result += obj.addendums[i] + "\n";
    }

    return result;
}

// Exercise 3
SCP *cloneSCP(SCP *original)
{
    SCP *clone = new SCP;
    clone->id = original->id;
    clone->objClass = original->objClass;
    clone->speConProcedures = original->speConProcedures;
    clone->description = original->description;
    clone->addendums = new string[original->numAddendums];
    for (int i = 0; i < original->numAddendums; i++)
    {
        clone->addendums[i] = original->addendums[i];
    }
    clone->numAddendums = original->numAddendums;
    return clone;
}