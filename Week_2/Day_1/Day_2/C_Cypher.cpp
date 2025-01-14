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

        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            int m;
            string s;
            cin>>m>>s;

            for(int j=0; j<m; j++)
            {
                char c=s[j];
                if(c=='U')
                {
                    //Down Move
                    a[i]--;
                    if(a[i]<0)
                    {
                        a[i]=9;
                    }
                }
                else
                {
                    //Up Move
                    a[i]++;
                    if(a[i]>9)
                    {
                        a[i]=0;
                    }
                }
            }


        }
        for(auto val:a)
        {
            cout<<val<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}