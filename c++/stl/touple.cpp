// // C++ code to demonstrate tuple, get() and make_pair()
// #include<iostream>
// #include<tuple> // for tuple
// using namespace std;
// int main()
// {
// 	// Declaring tuple
// 	tuple <char, int, float> geek;

// 	// Assigning values to tuple using make_tuple()
// 	geek = make_tuple('a', 10, 15.5);

// 	// Printing initial tuple values using get()
// 	cout << "The initial values of tuple are : ";
// 	cout << get<0>(geek) << " " << get<1>(geek);
// 	cout << " " << get<2>(geek) << endl;

// 	// Use of get() to change values of tuple
// 	get<0>(geek) = 'b';
// 	get<2>(geek) = 20.5;

// 	// Printing modified tuple values
// 	cout << "The modified values of tuple are : ";
// 	cout << get<0>(geek) << " " << get<1>(geek);
// 	cout << " " << get<2>(geek) << endl;

// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<tuple<int ,int,int > >v;
     v.push_back(make_tuple(1,2,3));
	 v.push_back(make_tuple(0,22,44));
	 sort(v.begin(),v.end());
	 for (int i = 0; i <v.size(); i++)
	 { cout<<get<1>(v[i])<<get<0>(v[i])<<get<2>(v[i]);
		 /* code */
	 }
	 
	 

	return 0;
}

