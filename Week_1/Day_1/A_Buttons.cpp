#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    int case_1=a+b, case_2=a+(a-1), case_3=b+(b-1);

    cout<<max({case_1,case_2,case_3})<<endl;
    return 0;
}