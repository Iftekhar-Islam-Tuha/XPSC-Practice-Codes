#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string s_1;

    while (n!=0)
    {
        s_1.push_back((n%10)+'0');
        n=n/10;
    }
    reverse(s_1.begin(), s_1.end());


    int size=4-(s_1.size());

    string s_2;
    for(int i=0; i<size; i++)
    {
        s_2.push_back('0');
    }

    string s_3=s_2+s_1;
    cout<<s_3<<endl;
    
    return 0;
}