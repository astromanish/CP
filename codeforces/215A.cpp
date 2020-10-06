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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, i, j;
    cin >> n;
    int arr1[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cin >> m;
    int arr2[m];
    for (j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    int max = arr1[0] / arr2[0];
    int current;
    int count = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cout << i << " " << j << endl;
            cout << arr2[j] / arr1[i] << " " << arr2[j] % arr1[i] << endl;
            if (arr2[j] % arr1[i] == 0)
            {
                current = arr2[j] / arr1[i];
                if (current > max)
                {
                    max = current;
                    count = 1;
                }
                else
                {
                    if (current == max)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;

    return 0;
}