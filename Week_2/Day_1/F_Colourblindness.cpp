#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int size;
        cin>>size;

        string s1,s2;
        cin>>s1>>s2;

        bool flag=true;

        for(int i=0; i<size; i++)
        {
            if(s1[i]=='R')
            {
                if(s2[i]!='R')
                {
                    flag=false;
                }
            }
            else if(s1[i]=='G' || s1[i]=='B')
            {
                if(s2[i]=='R')
                {
                    flag=false;
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}