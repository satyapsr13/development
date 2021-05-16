#include <bits/stdc++.h>
using namespace std;
#define int long long int
struct TreeNode
{
    int data, level;
    vector<TreeNode *> child;
    TreeNode(int x)
    {
        data = x;
        level = 0;
    }
};
vector<pair<int, int>> leaves;
void DefthForSearchSecond(TreeNode *root)
{
    for (int i = 0; i < root->child.size(); i++)
    {
        TreeNode *current = root->child[i];
        DefthForSearchSecond(current);
    }
    if (root->child.size() == 0)
    {
        leaves.push_back({root->level, root->data = 1});
        /* code */
    }
}
