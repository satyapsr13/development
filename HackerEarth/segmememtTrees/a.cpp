// //Coding-challange (c) Copyright 2021 Satyapsr
// /*this code is contributed by satyapsr SDE @ www.semikolan.co  */

// #include <bits/stdc++.h>
// #define db(x) cout << "\t\n" \
//                    << #x << "\t" << x << "\t\n"

// using namespace std;
// const int N = 1e5 + 1;

// int arr[N], tree[4 * N];
// void update(int node, int start, int end, int value, int index)
// {
//     if (start == end)
//     {
//         arr[index] = value;
//         tree[node] = value;
        
//     }
//     else
//     {
//         int mid = (start + end) / 2;
//         if (start <= index and index <= mid)
//         {
//             update(2 * node, start, mid, value, index);
//             /* code */
//         }
//         else
//         {
//             update(2 * node + 1, mid + 1, end, value, index);
//         }
//         tree[node] = min(tree[2 * node] , tree[2 * node + 1]);
//     }
    
// }
// int query(int node, int start, int end, int l, int r)
// {
//     // db(end);
//     if (start > r || end < l)
//     {
//         return 0;
       
//     }
//     if (l <= start and end <= r)
//     {
//         return tree[node];
        
//     }
//     int mid = (start + end) / 2;
//     return min(query(2 * node, start, mid, l, r), query(2 * node + 1, mid + 1, end, l, r));
// }
// void build(int node, int start, int end)
// {
//     if (start == end)
//     {
//         tree[node] = arr[start];
//         return;
         
//     }

//     int mid = (start + end) / 2;
//     build(2 * node, start, mid);
//     build(2 * node + 1, mid + 1, end);
//     tree[node] = min(tree[2 * node] , tree[2 * node+1]);
// }
// void solved_by_satyapsr13()
// {
//     int n, k, ans = 0, count = 0, sum = 0;
//     int q;
//     cin >> n >> q;

//     for (int i = 0; i < n; ++i)
//         cin >> arr[i];

//     build(1, 0, n - 1);
//     //  for (auto it: tree  )
//     //     {
//     //         cout << it<<" ";
//     //     }
//     char ch;
//     int a, b;
//     while (q--)
//     {
//         cin >> ch >> a >> b;
//         if (ch == 'u')
//         {
//             update(1, 0, n - 1, b, a);
//         }
//         else
//         {
//             cout << query(1, 0, n - 1, a, b);
             
             
//             cout << "\n";
//         }

        
//     }
// }
// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     solved_by_satyapsr13();
//     return 0;
// }
//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>
#define db(x) cout << "\t\n" \
                   << #x << "\t" << x << "\t\n"

using namespace std;
const int N = 1e5 + 1;

int arr[N], tree[4 * N];
void update(int node, int start, int end, int value, int index)
{
    if (start == end)
    {
        arr[index] = value;
        tree[node] = value;
    }
    else
    {
        int mid = (start + end) / 2;
        if (start <= index and index <= mid)
        {
            update(2 * node, start, mid, value, index);
            /* code */
        }
        else
        {
            update(2 * node + 1, mid + 1, end, value, index);
        }
        tree[node] = min(tree[2 * node], tree[2 * node + 1]);
    }
}
int query(int node, int start, int end, int l, int r)
{
    // db(end);
    if (start > r || end < l)
    {
        return INT_MAX;
    }
    if (l <= start and end <= r)
    {
        return tree[node];
    }
    int mid = (start + end) / 2;
    return min(query(2 * node, start, mid, l, r), query(2 * node + 1, mid + 1, end, l, r));
}
void build(int node, int start, int end)
{
    if (start == end)
    {
        tree[node] = arr[start];
        return;
    }

    int mid = (start + end) / 2;
    build(2 * node, start, mid);
    build(2 * node + 1, mid + 1, end);
    tree[node] = min(tree[2 * node], tree[2 * node + 1]);
}
void solved_by_satyapsr13()
{
    int n, k, ans = 0, count = 0, sum = 0;
    int q;
    cin >> n ;
    cin >> q;

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    build(1, 0, n - 1);
     
        
    char ch;
    int a, b;
    while (q--)
    {
        cin>>ch >> a >> b;
        if (ch=='u')
        {
            update(1, 0, n - 1, b, a);
        }
        else
        {
            cout << query(1, 0, n - 1, a, b);

            cout << "\n";
        }
    }
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solved_by_satyapsr13();
    return 0;
}