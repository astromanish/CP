#include <iostream>

using namespace std;

int main()
{
    int p=16,m=1,d=2,s=9981;
    int moneyLeft=s-p;
    int nGames=1;
    for(int i=1;;i++)
    {
        if(moneyLeft-(p-i*d)<=m)
        break;
        moneyLeft-=p-i*d;
        nGames++;
        
    }
    nGames+=moneyLeft/m;
    cout<<nGames;

}