//Coding-challange (c) Copyright 2021 Satyapsr
/*this code is contributed by satyapsr SDE @ www.semikolan.co  */

#include <bits/stdc++.h>

#define db(x) cout << __LINE__ << "->" \
                   << " " << #x << "\t" << x << "\t\n"
using namespace std;

unordered_map<char, long long> mp;
void iam()
{

    mp['a'] = 1;
    mp['e'] = 1;
    mp['i'] = 1;
    mp['o'] = 1;
    mp['u'] = 1;
    return;
}
int count(string s, int i)
{

    for (int j = i; j < i + 5; ++j)
    {
        if (mp[s[i]] == 0)
            return 0;
    }
    for (int j = i; j < i + 5; ++j)
    {
        if (mp[s[i]] == 0)
            return 0;
    }
    return 1;
}

int countVowelSubstrings(string word)
{
    iam();
    int ans = 0;
    for (int i = 0; i < word.length() - 4; ++i)
    {
        ans += count(word, i);
        cout << ans;
    }

    return ans;
}
signed main()
{

    iam();
    cout << countVowelSubstrings("unicornarihan");
    return 0;
}