#include <bits/stdc++.h>
using namespace std;

int main()
{
	pair <int, char> PAIR1 ;
	pair <string, double> PAIR2 ("GeeksForGeeks", 1.23) ;
	pair <string, double> PAIR3 ;

	PAIR1.first = 100;
	PAIR1.second = 'G' ;

	PAIR3 = make_pair ("GeeksForGeeks is Best",4.56);

	cout << PAIR1.first << " " ;
	cout << PAIR1.second << endl ;

	cout << PAIR2.first << " " ;
	cout << PAIR2.second << endl ;

	cout << PAIR3.first << " " ;
	cout << PAIR3.second << endl ;

	return 0;
}

// Different ways to initialize pair: 

// pair  g1;         //default
// pair  g2(1, 'a');  //initialized,  different data type
// pair  g3(1, 10);   //initialized,  same data type
// pair  g4(g3);    //copy of g3
#include <iostream>
#include<utility>

using namespace std;

int main()
{
	pair<char, int>pair1 = make_pair('A', 1);
	pair<char, int>pair2 = make_pair('B', 2);

	cout << "Before swapping:\n " ;
	cout << "Contents of pair1 = "
		<< pair1.first << " " << pair1.second ;
	cout << "Contents of pair2 = "
		<< pair2.first << " " << pair2.second ;
	pair1.swap(pair2);

	cout << "\nAfter swapping:\n ";
	cout << "Contents of pair1 = "
		<< pair1.first << " " << pair1.second ;
	cout << "Contents of pair2 = "
		<< pair2.first << " " << pair2.second ;

	return 0;
}


// The pair container is a simple container defined in <utility> header 
// consisting of two data elements or objects. 

// The first element is referenced as ‘first’ and the second element as ‘second’ 
// and the order is fixed (first, second).
// Pair is used to combine together two values which may be different in type. 
// Pair provides a way to store two heterogeneous objects as a single unit.
// Pair can be assigned, copied and compared. The array of objects allocated 
// in a map or hash_map are of type ‘pair’ by default in which all the ‘first’
//  elements are unique keys associated with their ‘second’ value objects.
// To access the elements, we use variable name followed by dot operator followed
//  by the keyword first or second.
// Syntax : 

// pair (data_type1, data_type2) Pair_name