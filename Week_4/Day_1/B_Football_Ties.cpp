#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        
        int x_draw=0, y_draw=0;

        if(x<3)
        {
            x_draw=x;
        }
        else
        {
            x_draw=x%3;
        }

        if(y<3)
        {
            y_draw=y;
        }
        else
        {
            y_draw=y%3;
        }

        cout<<min(x_draw,y_draw)<<'\n';
    }
    
    return 0;
}