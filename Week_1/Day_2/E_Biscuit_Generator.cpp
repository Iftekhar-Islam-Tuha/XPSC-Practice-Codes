#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int sum=0;

    while (c>=a)
    {
        sum+=b;
        c-=a;
    }
    cout<<sum<<endl;
    
    return 0;
}