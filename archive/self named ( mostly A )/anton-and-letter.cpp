#include <bits/stdc++.h>
#include <vector>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;
    cout << s.length();
    int ind = 1;
    vector<char> v;

    while (true)
    {
        v.push_back(s[ind]);
        if (s[ind + 1] == '}')
            break;
        ind += 3;
    }
    set<char> se(v.begin(), v.end());
    cout << se.size();
    return 0;
}