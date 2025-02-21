/*
Problem Link
https://leetcode.com/problems/find-elements-in-a-contaminated-binary-tree/description/
*/
#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class FindElements
{
public:
    set<int> nums;
    void dfs(TreeNode *root, int x = 0)
    {
        if (!root)
            return;
        nums.insert(x);
        dfs(root->left, x * 2 + 1);
        dfs(root->right, x * 2 + 2);
    }
    FindElements(TreeNode *root) { dfs(root); }
    bool find(int target) { return nums.count(target); }
};
int main()
{
    return 0;
}
