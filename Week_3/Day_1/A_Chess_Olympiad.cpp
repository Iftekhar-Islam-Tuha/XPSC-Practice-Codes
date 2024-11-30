#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    int remaining_score=(1*(4-(x+y+z)));

    float first_player_score=(1*(x)+0.5*(y))+remaining_score;

    float second_player_score=(1*(z)+0.5*(y));

    if(first_player_score>second_player_score)
    {
        cout<<"Yes"<<'\n';
    }
    else
    {
        cout<<"No"<<'\n';
    }
    return 0;
}