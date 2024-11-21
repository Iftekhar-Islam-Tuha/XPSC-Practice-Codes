#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int left=-1, right=-1;

        left=s.find('B');
        right=s.rfind('B');

        int ans=right-left+1;
        cout<<ans<<endl;
    }
    
    return 0;
}