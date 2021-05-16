#include <bits/stdc++.h>
#define ll int
using namespace std;
// ll no_of_1(ll t){
// 	ll counts = 0;

// 	while(t!=0){
// 		if( t&1 )
// 			counts++;
// 		t /= 2;
// 	}

// 	return counts;
// }
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    ll counts = 0;

    while (t != 0)
    {
        if (t & 1){
            counts++;
            cout<<counts<<"\t";
            }
       cout<<"t->\t"<<t<<endl;
        t /= 2;
    }
    cout << counts;
    return 0;
}
