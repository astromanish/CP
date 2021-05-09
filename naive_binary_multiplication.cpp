#include <bits/stdc++.h>

using namespace std;
class Naive
{
public:
    string s1, s2;

    long long int strToint(string binaryString)
    {
        int value = 0;
        int indexCounter = 0;
        for (int i = binaryString.size() - 1; i >= 0; i--)
        {

            if (binaryString[i] == '1')
            {
                value += 1LL << indexCounter;
            }
            indexCounter++;
        }
        return value;
    }

    int makeEqualLength(string &str1, string &str2)
    {
        int len1 = str1.size();
        int len2 = str2.size();
        if (len1 < len2)
        {
            for (int i = 0; i < len2 - len1; i++)
                str1 = '0' + str1;
            return len2;
        }
        else if (len1 > len2)
        {
            for (int i = 0; i < len1 - len2; i++)
                str2 = '0' + str2;
        }
        return len1;
    }

    string add(string first, string second)
    {
        string result;

        int length = makeEqualLength(first, second);
        int carry = 0;

        for (int i = length - 1; i >= 0; i--)
        {
            int firstBit = first.at(i) - '0';
            int secondBit = second.at(i) - '0';

            int sum = (firstBit ^ secondBit ^ carry) + '0';

            result = (char)sum + result;

            carry = (firstBit & secondBit) | (secondBit & carry) | (firstBit & carry);
        }

        if (carry)
            result = '1' + result;

        return result;
    }

public:
    long long int NaiveMultiplication(string s1, string s2)
    {
        if (s1.size() < s2.size())
            swap(s1, s2);
        int n = s1.size();
        int m = s2.size();
        int cnt = 0;
        string res = "0";
        for (int i = m - 1; i >= 0; i--)
        {
            string temp = string(cnt, '0');
            if (s2[i] == '1')
            {
                temp = s1 + temp;
            }
            res = add(res, temp);
            cnt++;
        }
        return strToint(res);
    }
};

int main()
{
    Naive n;
    cin >> n.s1 >> n.s2;
    cout << n.NaiveMultiplication(n.s1, n.s2);
}