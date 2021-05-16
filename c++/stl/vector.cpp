#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
struct test
{
    /* data */
    int a, b, c;
};

int main(int argc, char const *argv[])
{
    // cout << "sasfa";
    // vector<int> v1(20, 9);

    // for (auto x : v1)
    // {
    //     cout << x;
    //     cout << "\t\n";
    // }
    vector<test> v;

    for (int i = 0; i <4; i++)
    {
        /* code */
    v.push_back({5, i+1, i+2});
    // cout << v[i].a<< v[i].b<< v[i].c<<endl;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i <4; i++)
    {
        /* code */
    // v.push_back({5, i+1, i+2});
    cout << v[i].a<< v[i].b<< v[i].c<<endl;
    }
    // for(auto i :v){

    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     v1.push_back(i);
    //     cout<<"\n\tsize"<<v1.size()<<"\tcapacity"<<v1.capacity() ;

    //     /* code */
    // }

    //v1.insert(2);
    // v1.push_back(10);
    //v1.data();
    /* code */
    return 0;
}
