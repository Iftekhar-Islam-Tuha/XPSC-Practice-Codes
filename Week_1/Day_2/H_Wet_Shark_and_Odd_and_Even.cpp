#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    long long even_sum=0;
    long long odd_sum=0;

    int odd_cnt=0;

    long long odd_min=LONG_MAX;

    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even_sum+=a[i];
        }
        else
        {
            odd_sum+=a[i];
            odd_cnt++;
            if(a[i]<odd_min)
            {
                odd_min=a[i];
            }
        }
    }

    long long sum=0;

    if(odd_cnt%2==0)
    {
        sum=even_sum+odd_sum;
    }
    else
    {
        sum=even_sum+(odd_sum-odd_min);
    }
    cout<<sum<<endl;
    return 0;
}