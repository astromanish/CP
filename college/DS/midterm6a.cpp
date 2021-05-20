#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a;
    a = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 1, mx = 1;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1 && a[i] <= a[i + 1])
        {
            count++;
        }
        else
        {
            if (count > mx)
            {
                mx = count;
            }
            count = 1;
        }
    }
    cout << mx << "\n";
}
