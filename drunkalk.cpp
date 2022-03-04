#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;cin>>n;
    while(n--)
    {
        int m;
        cin>>m;
        if(m%2==0)//if it isan even numberprint number it self
        cout<<m<<endl;
        else//if it is odd number print number+two
        cout<<m+2<<endl;
    }
}
