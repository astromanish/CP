#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int x,y,z;
    int ar[3];

    while(t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>ar[i];
        }
        x=ar[0];
        y=ar[1];
        z=ar[2];
        if(x!=y && y!=z && z!=x)
        {
            cout<<"NO"<<endl;
        }
        else
        {

            if( (x==y && x!=z) || (x==z && z!=y) || (y==z && z!=x))
            {
                if(x==y && y!=z)
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<z<<" "<<z<<endl;
                }
                if(x==z && z!=y)
                {
                    cout<<"YES"<<endl;
                    cout<<y<<" "<<x<<" "<<x<<endl;
                }
                if(y==z && z!=x)
                {
                    cout<<"YES"<<endl;
                    cout<<x<<" "<<x<<" "<<y<<endl;
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        



    }


    return 0;
}