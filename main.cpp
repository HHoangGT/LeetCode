#include "libs/template.h"
#include "LeetCode/TimeNeededToBuyTickets2073.h"

using namespace std;

int main()
{
    Solution s;
    vector<int> tickets = {5, 1, 1, 1};
    int k = 0;
    cout << s.timeRequiredToBuy(tickets, k) << endl;
    return 0;
}