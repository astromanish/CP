
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
    while (t--)
    {
        cin >> s;
        int cnt = 0;
        int l = s.length();
        int arr[l] = {0};
        int i, j;
        for (i = 0; i < l; i++)
        {
            if (s[i] == '(')
            {
                arr[i] = true;
                for (j = i + 1; j < l; j++)
                {
                    if (!arr[j])
                    {
                        if (s[j] == ')')
                        {
                            arr[j] = true;
                            cnt++;
                        }
                    }
                }
            }
            if (s[i] == '[')
            {
                arr[i] = true;
                for (j = i + 1; j < l; j++)
                {
                    if (!arr[j])
                    {
                        if (s[j] == ']')
                        {
                            arr[j] = true;
                            cnt++;
                        }
                    }
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}