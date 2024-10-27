#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int freq[26]={0};

    int size=s.size();

    for(int i=0; i<size; i++)
    {
        freq[s[i]-'a']++;
    }

    bool flag=false;
    char ans;
    for(int i=0; i<26; i++)
    {
        if(freq[i]==0)
        {
            flag=true;
            ans=i+'a';
            break;
        }
    }
    if(flag==true)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"None"<<endl;
    }
    return 0;
}