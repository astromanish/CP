#include <iostream>

using namespace std;

int main(void)
{
    int t_page;
    cin>>t_page;
    int week[7];
    for(int i=0;i<7;i++)
    {
        cin>>week[i];
    }
    int r_page=0;
    int week_day=1;
    while(r_page<t_page)
    {
        r_page+=week[week_day-1];
        if(week_day==7)
        week_day=1;
        else
        {
            week_day++;
        }
        
    }
    if(week_day==1)
    cout<<7;
    else
    {
        cout<<week_day-1;
    }

    return 0;
}