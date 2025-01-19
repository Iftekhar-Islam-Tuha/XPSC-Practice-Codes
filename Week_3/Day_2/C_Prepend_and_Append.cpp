#include <bits/stdc++.h>
#define ll long long
#define Yes cout<<"YES"<<'\n';
#define No cout<<"NO"<<'\n';
#define NL '\n';

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int l=0,r=n-1;

        int cnt=0;
        while (l<=r)
        {
            if(s[l]==s[r])
            {
                for(int j=l; j<=r; j++)
                {
                    cnt++;
                }
                break;
            }
            else
            {
                l++;
                r--;
            }
        }
        cout<<cnt<<NL;
    }
    
    return 0;
}