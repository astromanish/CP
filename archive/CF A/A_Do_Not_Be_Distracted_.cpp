
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
    int t;
    cin >> t;
    int n;
    string s;
    int i;
    while (t--)
    {
        cin >> n;
        int arr[26] = {0};
        cin >> s;
        int last = s[0];
        int cur;
        for (i = 1; i < n; i++)
        {
            cur = s[i];
            if (cur != last)
            {
                arr[last - 65]++;
            }
            last = cur;
        }
        arr[last - 65]++;
        bool s = false;
        for (i = 0; i < 26; i++)
        {
            if (arr[i] > 1)
            {
                s = true;
                break;
            }
        }
        if (s)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}