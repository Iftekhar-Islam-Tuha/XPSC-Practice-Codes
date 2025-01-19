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
    
    ll n,m; cin>>n>>m;
    vector<ll> v1(n),v2(m);
    for(ll i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    for(ll i=0; i<m; i++)
    {
        cin>>v2[i];
    }
 
    map<ll,ll> mp1,mp2;
    for(auto val:v1)
    {
        mp1[val]++;
    }
    for(auto val:v2)
    {
        mp2[val]++;
    }
 
    ll ans=0;
    for(auto [key,val]: mp2)
    {
        if(mp1.find(key)==mp1.end())
        {
            ans+=0;
        }
        else
        {
            ans+=(mp1[key]*val);
        }
    }
    cout<<ans<<NL;
    return 0;
}