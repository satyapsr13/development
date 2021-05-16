#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    /* data */
};
node *create()
{
    node *newnode;
    int x;
    newnode = (node *)malloc(sizeof(node));
    cout << endl
         << "Enter data in NODE (if you dont want to enter then press -1 ) ->\t";
    cin >> x;
    if (x == -1)
    {
        return 0;
    }

    newnode->data = x;

    cout << "enter left child of   " << x;
    newnode->left = create();
    cout << "enter right child of  " << x;
    newnode->right = create();
    return newnode;
}
void preorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}
int height(node *root) // complexity is O(n)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return (1 + max(lh, rh));
}
//||||||||||||||||||| diameter|||||||||||||||||||||||||||||||||||||||||||||||||||
// int diameter(node *root)// complexity is O(n^2)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }

//     int ld = diameter(root->left);
//     int rd = diameter(root->right);
//     int lrd = height(root->left) + height(root->right) + 2;
//     return max(ld, rd, lrd);
// }
class dipair
{
public:
    int diameter;
    int h;
};
dipair diameter(node *root) // complexity is O(n)
{
    if (root == NULL)
    {
        dipair d = new dipair();
        d.h = -1;
        d.diameter = 0;
        return d;
    }

    dipair right = diameter(root->right);
    dipair left = diameter(root->left);
    // int lrd = height(root->left) + height(root->right) + 2;
    dipair mres = new dipair();
    mres.h = max(left.h, right.h) + 1;
    int ld = left.diameter;
    int rd = right.diameter;
    int sp = left.h + right.h + 2;
    mres.diameter = max(sp, ld, rd);
    return mres;
}
//||||||||||||||||||| diameter|||||||||||||||||||||||||||||||||||||||||||||||||||
bool balanced(node *root)
{
    int left = balanced(root->left);

    int right = balanced(root->right);
    int lh = height(root->left);
    int rh = height(root->right);
    if(left==true && right==true && abs(lh-rh)>1){
        return true;
    }else
    {
        return false;
    }
    
}
int main(int argc, char const *argv[])
{
    node *root;
    root = 0;
    root = create();
    preorder(root);
    return 0;
}
