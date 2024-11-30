#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    int won_by=x-y;

    if(won_by>=18)
    {
        cout<<"RCB"<<'\n';
    }
    else
    {
        cout<<"CSK"<<'\n';
    }
    return 0;
}