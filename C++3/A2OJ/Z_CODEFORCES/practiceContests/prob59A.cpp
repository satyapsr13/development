// // // https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
// using namespace std;
int main(int argc, char const *argv[])
{
    std::string s;
    // int sum1 = 0, sum2 = 0;
    std::cin >> s;
    int sum = count_if(s.begin(), s.end(), isupper);
    transform(s.begin(), s.end(), s.begin(), sum > s.size() - sum ? toupper : tolower);
    std::cout << s;
    return 0;
}
// #include <iostream>
// #include <algorithm>
// // #include <bits/stdc++.h>
// main()
// {
//     std::string a;
//     std::cin >> a;
//     int u =  count_if(a.begin(), a.end(), isupper);
//     transform(a.begin(), a.end(), a.begin(), u > a.size() - u ? toupper : tolower);
//     std::cout << a;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int square(int x)
// {
//     //define square function
//     return x * x;
// }
// int main(int argc, char **argv)
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int res[10];
//     transform(arr, arr + 10, res, square);
//     for (int i = 0; i < 10; i++)
//     {
//         cout << res[i] << "\n";
//     }
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// bool predicate(int n) {
//    return (n > 3);
// }

// int main(void) {
//    vector<int> v = {1, 2, 3, 4, 5};
//    int cnt;

//    cnt = count_if(v.begin(), v.end(), predicate);

//    cout << "There are " << cnt << " numbers are greater that 3." << endl;

//    return 0;
// }