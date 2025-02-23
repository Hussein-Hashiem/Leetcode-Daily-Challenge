/*
Problem Link
https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/description/
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
class Solution
{
public:
    TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
    {
        stack<TreeNode *> s;
        TreeNode *root = new TreeNode(preorder[0]);
        s.push(root);
        int i = 1, j = 0;
        while (i < preorder.size())
        {
            TreeNode *node = new TreeNode(preorder[i]);
            if (!s.top()->left)
                s.top()->left = node;
            else
                s.top()->right = node;
            s.push(node);
            i++;
            while (!s.empty() && j < postorder.size() && s.top()->val == postorder[j])
                s.pop(), j++;
        }
        return root;
    }
};
int main()
{
    return 0;
}
