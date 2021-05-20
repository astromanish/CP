#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    string s1 = arr[0], s2;
    int t1 = 1, t2 = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] == s1)
        {
            t1++;
        }
        else
        {
            s2 = arr[j];
            t2++;
        }
    }
    if (t1 > t2)
        cout << s1;
    else
    {
        cout << s2;
    }

    return 0;
}