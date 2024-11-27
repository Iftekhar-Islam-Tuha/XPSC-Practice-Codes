#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;

    int operation=0;

    int size=t.size();

    for(int i=0; i<size; i++)
    {
        if(s[i]!=t[i])
        {
            operation++;
        }
    }
    cout<<operation<<'\n';
    return 0;
}