
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define MOD 1e9 + 7

int main()
{
    string s;
    cin >> s;
    int small = 0, capital = 0, digit = 0;
    int l = s.length();
    int i;
    char a;
    for (i = 0; i < l; i++)
    {
        a = s[i];
        if (a >= 'A' && a <= 'Z')
            capital++;
        else
        {
            if (a >= 'a' && a <= 'z')
                small++;
            else
            {
                if (a >= '0' && a <= '9')
                    digit++;
            }
        }
    }
    if (l >= 5 && capital > 0 && small > 0 && digit > 0)
        cout << "Correct" << endl;
    else
        cout << "Too weak" << endl;
    return 0;
}