#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    int p = arr1[0] * arr2[0];
    bool match = true;
    for (int k = 1; k < n; k++)
    {
        if (p != arr1[k] * arr2[k])
        {
            match = false;
            break;
        }
    }
    if (match)
    {
        cout << "Rab ne bana di Jodi"
             << "\n"
             << p;
    }
    else
    {
        cout << "Har kisii koo nahi miltaaa yahan pyaaar zindagiii me";
    }

    return 0;
}