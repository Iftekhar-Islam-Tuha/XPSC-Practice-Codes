#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    if(a>b)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int cnt=0;

        for(int i=a; i<=b; i++)
        {
            if(i>=a && i<=b)
            {
                cnt+=1;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}