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
        sort(v.begin(),v.end());
        int a,b,c;

        a=v[n-1]-v[2];
        b=v[n-3]-v[0];
        c=v[n-2]-v[1];
        cout<<min({a,b,c})<<NL;
    }
    
    
    return 0;
}