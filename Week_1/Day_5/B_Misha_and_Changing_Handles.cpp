#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;

    map<string,string> ans,has;

    while (q--)
    {
        string a,b;
        cin>>a>>b;

        if(has.find(a) != has.end())
        {
            string s=has[a];

            ans[s]=b;

            has.erase(a);
            has[b]=s;
        }
        else
        {
            ans[a]=b;
            has[b]=a;
        }
        
    }

    cout<<ans.size()<<'\n';

    for(auto[x,y] : ans)
    {
        cout<<x<<" "<<y<<'\n';
    }
    
    return 0;
}