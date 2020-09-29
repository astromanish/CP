#include <iostream>

using namespace std;

int main(void)
{
    char *s=(char *)malloc(10*sizeof(char));
    cin>>s;
    cout<<s;
    return 0;
}