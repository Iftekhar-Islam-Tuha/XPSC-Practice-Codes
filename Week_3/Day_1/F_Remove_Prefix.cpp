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

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        map<int,bool> mp;
        int cnt=0;

        for(int i=n-1; i>=0; i--)
        {
            int val=v[i];
            if(mp[val]==true)
            {
                for(int j=i; j>=0; j--)
                {
                    cnt++;
                }
                break;
            }
            else
            {
                mp[val]=true;
            }
        }
        cout<<cnt<<NL;
    }
    return 0;
}