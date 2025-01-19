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
    stack<string> st;
    map<string,bool> mp;
    while (t--)
    {
        string s;
        cin>>s;
        st.push(s);
    }
    while (!st.empty())
    {
        string val=st.top();
        st.pop();

        if(mp[val]==false)
        {
            int size=val.size();
            cout<<val[size-2]<<val[size-1];
            mp[val]=true;
        }
        else
        {
            mp[val]=true;
        }
    }
    
    
    return 0;
}