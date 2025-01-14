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

        set<char> st;

        string s;
        cin>>s;

        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
        }

        string s_2;
        string s_3="Timru";

        for(auto val: st)
        {
            s_2.push_back(val);
        }
        if(s.size()==s_3.size())
        {
            if(s_2==s_3)
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
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}

//Fatching Problem in VJudge