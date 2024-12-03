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

        map<string, vector<int>> mp;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                string s;
                cin>>s;

                mp[s].push_back(i);
            }
        }

        vector<int> ans(3);

        for(auto[x,y] : mp)
        {
            vector<int> v=y;

            if(v.size()==1)
            {
                ans[v[0]]+=3;
            }
            if(v.size()==2)
            {
                ans[v[0]]+=1;
                ans[v[1]]+=1;
            }
        }
        for(auto val:ans)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}