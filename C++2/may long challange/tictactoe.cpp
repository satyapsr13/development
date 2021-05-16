// https://www.codechef.com/MAY21C/problems/TCTCTOE
#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        char a[3][3];
        int x_ko_count_kro = 0, o_ko_count_kro = 0,  xjeetega = 0,  ojeetega = 0, count_ = 0;
        //-----------------------------------------------------
        //input
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] ==  'X')
                {
                    x_ko_count_kro++;
                }
                else
                {
                    if (a[i][j] ==  'O')
                    {
                        o_ko_count_kro++;
                    }
                    else
                    {
                        if (a[i][j] == '_')
                        {
                            count_++;
                        }
                    }
                }
            }
        }

        //-----------------------------------------------------
        //check along row
        for (int i = 0; i < 3; i++)
        {
            if (a[i][0] == a[i][1] && a[i][2] == a[i][1])
            {
                if (a[i][0] ==  'X')
                {
                     xjeetega++;
                    /* code */
                }
                else
                {
                    if (a[i][0] ==  'O')
                    {
                         ojeetega++;
                        /* code */
                    }
                }
            }
        }
        //check along column
        for (int i = 0; i < 3; i++)
        {
            if (a[0][i] == a[1][i] && a[2][i] == a[1][i])
            {
                if (a[0][i] ==  'X')
                {
                     xjeetega++;
                    /* code */
                }
                else
                {
                    if (a[0][i] ==  'O')
                    {
                         ojeetega++;
                        /* code */
                    }
                }
            }
        }
        //check along diagonal
        if (a[0][0] == a[1][1] && a[2][2] == a[1][1])
        {
            if (a[1][1] ==  'X')
            {
                 xjeetega++;
                /* code */
            }
            else
            {
                if (a[1][1] ==  'O')
                {
                     ojeetega++;
                    /* code */
                }
            }
        }
        if (a[0][2] == a[1][1] && a[2][0] == a[1][1])
        {
            if (a[1][1] ==  'X')
            {
                 xjeetega++;
                /* code */
            }
            else
            {
                if (a[1][1] ==  'O')
                {
                     ojeetega++;
                    /* code */
                }
            }
        }

        if (o_ko_count_kro > x_ko_count_kro)
        {
            cout << 3 << "\n";
            /* code */
        }
        else
        {
            if (x_ko_count_kro - o_ko_count_kro > 1)
            {
                cout << 3 << "\n";
                /* code */
            }
            else
            {
                if (x_ko_count_kro > o_ko_count_kro &&  xjeetega == 1 and  ojeetega == 0)
                {
                    cout << 1 << "\n";
                    /* code */
                }
                else
                {
                    if (o_ko_count_kro > x_ko_count_kro &&  ojeetega == 1 and  xjeetega == 0)
                    {
                        cout << 1 << "\n";
                        /* code */
                    }
                    else
                    {
                        if (count_ == 0 and ( xjeetega +  ojeetega == 0))
                        {
                            cout << 1 << "\n";
                            /* code */
                        }
                        else
                        {
                            if (count_ == 0 and  xjeetega == 2)
                            {
                                cout << 1 << "\n";
                            }
                            else
                            {
                                if (count_ > 0 and  xjeetega +  ojeetega == 0)
                                {
                                    cout << 2 << "\n";
                                    /* code */
                                }
                                else
                                {
                                    cout << 3 << "\n";
                                }
                            }
                        }
                    }
                }
            }
        }

        // for (int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 3; j++)
        //     {
        //     }
        // }
    }

    return 0;
}
