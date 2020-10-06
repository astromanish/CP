#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>

#define all(v) v.begin(), v.end()
#define endl "\n"

#define N 4
#define M 2

#define MOD 1e9 + 7

int countChanges(int matrix[][M], int n, int m)
{
    int dist = n + m - 1;
    int Max_element = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            Max_element = max(Max_element,
                              matrix[i][j]);
        }
    }
    int freq[dist][Max_element + 1];
    for (int i = 0; i < dist; i++)
    {
        for (int j = 0; j < Max_element + 1; j++)
            freq[i][j] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            freq[i + j][matrix[i][j]]++;
        }
    }

    int min_changes_sum = 0;
    for (int i = 0; i < dist / 2; i++)
    {
        int maximum = 0;
        int total_values = 0;
        for (int j = 0; j < Max_element + 1; j++)
        {
            maximum = max(maximum, freq[i][j] + freq[n + m - 2 - i][j]);
            total_values += freq[i][j] + freq[n + m - 2 - i][j];
        }
        min_changes_sum += total_values - maximum;
    }
    return min_changes_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    int n, m, i, j;
    while (T--)
    {
        cin >> n >> m;
        int arr[N][M];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        int minChanges = countChanges(arr, n, m);
        cout << minChanges << endl;
    }
    return 0;
}
