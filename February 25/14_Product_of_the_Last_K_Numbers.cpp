/*
Problem Link
https://leetcode.com/problems/product-of-the-last-k-numbers/description/
*/
#include <bits/stdc++.h>
using namespace std;
class ProductOfNumbers
{
public:
    vector<int> nums = {1};
    ProductOfNumbers()
    {
    }
    void add(int num)
    {
        num ? (nums.push_back(num * nums.back())) : nums.resize(1);
    }
    int getProduct(int k)
    {
        return (k >= nums.size()) ? 0 : nums.back() / nums[nums.size() - k - 1];
    }
};
int main()
{
    return 0;
}
