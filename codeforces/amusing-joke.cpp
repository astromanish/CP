#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

int main()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int arr1[26] = {0}, arr2[26] = {0};
    if (s1.size() + s2.size() == s3.size())
    {
        int i;
        for (i = 0; i < s1.size(); i++)
        {
            arr1[int(s1[i]) - 65]++;
        }
        for (i = 0; i < s2.size(); i++)
        {
            arr1[int(s2[i]) - 65]++;
        }
        for (i = 0; i < s3.size(); i++)
        {
            arr2[int(s3[i]) - 65]++;
        }
        for (i = 0; i < 26; i++)
        {
            if (arr1[i] != arr2[i])
            {
                cout << "NO"
                     << "\n";
                return 0;
            }
        }
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}