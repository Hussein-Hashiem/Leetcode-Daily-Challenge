/*
Problem Link
https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc = 0, dec = 0;
        for(int i = 0;i<nums.size();i++){
            int ci = 0;
            for(int j = i;j < nums.size();j++){
                if(j == nums.size()-1){ci++;break;}
                if(nums[j]<nums[j+1])ci++;
                else {ci++; break;}
            }
            inc = max(inc, ci);
        }
        for(int i = 0;i<nums.size();i++){
            int cd = 0;
            for(int j = i;j < nums.size();j++){
                if(j == nums.size()-1){cd++;break;}
                if(nums[j]>nums[j+1])cd++;
                else {cd++; break;}
            }
            dec = max(dec, cd);
        }
        return max(inc, dec);
    }
};
int main()
{
    return 0;
}
