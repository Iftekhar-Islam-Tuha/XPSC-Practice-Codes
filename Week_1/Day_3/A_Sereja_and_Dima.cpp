#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    deque<int> dq(n);

    for(int i=0; i<n; i++)
    {
        cin>>dq[i];
    }

    int sereja=0, dima=0, who=0;

    while (dq.empty()!=true)
    {
        int left=dq.front();
        int right=dq.back();

        int mx=max(left,right);

        if(who%2==0)
        {
            sereja+=mx;
        }
        else
        {
            dima+=mx;
        }

        if(left==mx)
        {
            dq.pop_front();
        }
        else
        {
            dq.pop_back();
        }
        who++;
    }
    cout<<sereja<<" "<<dima<<endl;
    
    return 0;
}