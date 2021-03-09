#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{   cout<<"sasfa"; 
    vector<int> v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        cout<<"\n\tsize"<<v1.size()<<"\tcapacity"<<v1.capacity() ;
        
        /* code */
    }
    
    //v1.insert(2);
   // v1.push_back(10);
    //v1.data();
    /* code */
    return 0;
}
