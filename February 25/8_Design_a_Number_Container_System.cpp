/*
Problem Link
https://leetcode.com/problems/design-a-number-container-system/description/
*/
#include <bits/stdc++.h>
using namespace std;
class NumberContainers
{
public:
    unordered_map<int, int> nums_change;
    map<int, set<int>> nums_find;
    NumberContainers() {}

    void change(int index, int number)
    {
        nums_find[nums_change[index]].erase(index);
        nums_change[index] = number;
        nums_find[number].insert(index);
    }

    int find(int number)
    {
        if (nums_find[number].size() > 0)
            return *(nums_find[number].begin());
        return -1;
    }
};
int main()
{
    return 0;
}
