#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 3, 2, 8, 16};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << binary_search(arr, arr + 5, 10) << "\n";
    cout << *find(arr, arr + 5, 10);
    return 0;
}