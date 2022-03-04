#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y;
        cin>>x>>y;
        if(x==0&&y%2==0)
        {
            cout<<"Yes"<<"\n";
            continue;
        }
        else if(x==0&&y%2!=0)
        {
            cout<<"No"<<"\n";
            continue;
        }
        if((x+2*y)%2==0)
        {
            cout<<"Yes"<<"\n";
        }
        else
        cout<<"No"<<"\n";
    }
}
