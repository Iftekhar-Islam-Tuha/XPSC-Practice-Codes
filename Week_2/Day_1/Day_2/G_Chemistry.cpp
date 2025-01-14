#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        map<char,int> mp;

        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }

        int odd=0;
        for(auto [key,value]:mp)
        {
            if((k>0) && (value%2!=0))
            {
                mp[key]--;
                k--;
            }
            else if(value%2!=0)
            {
                odd++;
            }
        }
        if(k==0 && odd>1)
        {
            cout<<"NO"<<'\n';
        }
        else if(k>=1)
        {
            int cnt=0;
            for(auto [key,val]:mp)
            {
                cnt+=val;
            }
            if(k<cnt)
            {
                cout<<"YES"<<'\n';
            }
            else
            {
                cout<<"NO"<<'\n';
            }
        }
        else
        {
            cout<<"YES"<<'\n';
        }
    }
    return 0;
}