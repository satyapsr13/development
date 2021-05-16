// https://www.codechef.com/problems/LOG_EQN
#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
 
ll no_of_1(ll num){
	ll counts = 0;
 
	while(num!=0){
		if( num&1 )
			counts++;
		num /= 2;
	}

	return counts;
}
 
ll modadd(ll a,ll b){
	a = a % mod;
	b = b % mod;
	ll ans = (a + b)% mod;
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	srand(time(NULL));
	int t;
	cin >> t;
 
	while(t--){
		int n;
		cin >> n;
		vector<ll> v(n);
		for(int i = 0; i < n ; i++)
			cin >> v[i];
		for(int i = 0; i < n ; i++)
		{
			v[i] = no_of_1(v[i]);
		}
 
		vector<ll> odd_prefix(n);
		vector<ll> even_prefix(n);
		odd_prefix[0] = v[0] % 2;
		even_prefix[0] = (v[0] + 1) % 2;
		for(int i = 1; i < n ; i++)
		{
			odd_prefix[i] = odd_prefix[i-1] + (v[i] % 2);	
			even_prefix[i] = even_prefix[i-1] + ((v[i] + 1) % 2);	
		}
		ll ans = 0;
		for(int i = 1; i < n-1 ; i++)
		{
			if( v[i] % 2 == 1)	//odd
			{
				ll temp = odd_prefix[i-1] * (odd_prefix[n-1] - odd_prefix[i]);	// odd,_,odd
				temp = temp % mod;
				ans = modadd(ans,temp);
 
				temp = even_prefix[i-1] * (even_prefix[n-1] - even_prefix[i]);	// even,_,even
				temp = temp % mod;
				ans = modadd(ans,temp);
			}
			else				//even
			{
				ll temp = odd_prefix[i-1] * (even_prefix[n-1] - even_prefix[i]);	// odd,_,even
				temp = temp % mod;
				ans = modadd(ans,temp);
 
				temp = even_prefix[i-1] * (odd_prefix[n-1] - odd_prefix[i]);	// even,_,odd
				temp = temp % mod;
				ans = modadd(ans,temp);
			}
		}
		cout << ans << "\n";
	}
 
	return 0;
}