/*
Problem Link
https://leetcode.com/problems/most-profitable-path-in-a-tree/description/
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> poptime, parent;
    void popdfs(int n, int p, vector<vector<int>> &adj)
    {
        parent[n] = p;
        for (auto ch : adj[n])
        {
            if (ch == p)
                continue;
            popdfs(ch, n, adj);
        }
    }
    int alicedfs(int n, int p, vector<vector<int>> &adj, int alicet, vector<int> &amount)
    {
        int alicemoney = 0;
        if (alicet < poptime[n])
            alicemoney = amount[n];
        else if (alicet == poptime[n])
            alicemoney = amount[n] / 2;
        if (adj[n].size() == 1 && n)
            return alicemoney;
        int mx = -1e9;
        for (auto ch : adj[n])
        {
            if (ch == p)
                continue;
            mx = max(mx, alicedfs(ch, n, adj, alicet + 1, amount));
        }
        return mx + alicemoney;
    }
    int mostProfitablePath(vector<vector<int>> &edges, int bob, vector<int> &amount)
    {
        int n = edges.size() + 1;
        vector<vector<int>> adj(n);
        for (auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        poptime = parent = vector<int>(n, 1e9);
        popdfs(0, -1, adj);
        int time = 0;
        for (int i = bob; i != -1; i = parent[i])
            poptime[i] = time++;
        return alicedfs(0, -1, adj, 0, amount);
    }
};
auto init = []()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();
int main()
{
    return 0;
}
