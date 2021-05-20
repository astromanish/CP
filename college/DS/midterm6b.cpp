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
    int s;
    cin >> s;
    int count = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == s)
            {
                count++;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (count > 0)
    {
        cout << "THE ARRAY HAS A MATCHING PAIR FOR THE GIVEN s"
             << "\n";
    }
    else
    {
        cout << "THE ARRAY DOES NOT HAVE THE MATCHING PAIR FOR THE GIVEN s"
             << "\n";
    }
}
