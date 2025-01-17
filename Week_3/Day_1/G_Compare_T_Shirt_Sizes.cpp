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
        string a,b;
        cin>>a>>b;

        char a_last=a[a.size()-1],b_last=b[b.size()-1];

        if(a_last=='S' && b_last=='S')
        {
            if(a.size()>b.size())
            {
                cout<<"<"<<NL;
            }
            else if(b.size()>a.size())
            {
                cout<<">"<<NL;
            }
            else
            {
                cout<<"="<<NL;
            }
        }

        else if(a_last=='L' && b_last=='L')
        {
            if(a.size()>b.size())
            {
                cout<<">"<<NL;
            }
            else if(b.size()>a.size())
            {
                cout<<"<"<<NL;
            }
            else
            {
                cout<<"="<<NL;
            }
        }

        else if(a_last=='M' && b_last=='M')
        {
            cout<<"="<<NL;
        }

        else if((a_last=='S' && b_last=='M') || (a_last=='S' && b_last=='L'))
        {
            cout<<"<"<<NL;
        }

        else if((a_last=='M' && b_last=='S') || (a_last=='L' && b_last=='S' || (a_last=='L' && b_last=='M')))
        {
            cout<<">"<<NL;
        }

        else if(a_last=='M' && b_last=='L')
        {
            cout<<"<"<<NL;
        }
        
    }
    return 0;
}