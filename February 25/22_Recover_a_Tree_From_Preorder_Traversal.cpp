/*
Problem Link
https://leetcode.com/problems/recover-a-tree-from-preorder-traversal/description/
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
    TreeNode *recoverFromPreorder(string traversal)
    {
        stack<TreeNode *> s;
        TreeNode *curr;
        string num = "";
        int dash = 0;
        for (int i = 0; i < traversal.size(); i++)
        {
            if (traversal[i] == '-')
                dash++;
            else if (isdigit(traversal[i]) && isdigit(traversal[i + 1]))
                num += traversal[i];
            else
            {
                num += traversal[i];
                int x = stoi(num);
                num = "";
                curr = new TreeNode;
                curr->val = x;
                if (dash == 0)
                    s.push(curr);
                else if (dash == s.size())
                {
                    if (s.top()->left == NULL)
                    {
                        s.top()->left = curr;
                        s.push(curr);
                    }
                    else
                    {
                        s.top()->right = curr;
                        s.push(curr);
                    }
                }
                else
                {
                    while (s.size() > dash)
                        s.pop();
                    if (s.top()->left == NULL)
                    {
                        s.top()->left = curr;
                        s.push(curr);
                    }
                    else
                    {
                        s.top()->right = curr;
                        s.push(curr);
                    }
                }
                dash = 0;
            }
        }
        while (s.size() > 1)
            s.pop();
        return s.top();
    }
};
int main()
{
    return 0;
}
