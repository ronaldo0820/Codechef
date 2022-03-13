#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define fi first
#define se second
#define sz(x) x.size()
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define eachi(x,a) for(auto &x: a)
#define ciii(X, Y, Z)       int X, Y, Z; cin>>X>>Y>>Z;
int sum1 = 0, sum2 = 0;
void solve()
{
  ciii(m1, m2, n);
  vector<int> v(n);
  eachi(x, v)cin >> x;
  vector<int> v1(n);
  vector<int> v2(n);
  sort(all(v));
  int j=0,k=0;
  for (int i = n - 1; i >= 0; i--) {
    int f = sum1 - sum2;
    int g = sum2 - sum1;
    if (abs(m1 * v[i] + f) < abs(m2 * v[i] + g)) {
      sum1 += m1 * v[i];
      v1[j]=v[i];
      j++;
    }
    else {
      sum2 += m2 * v[i];
      v2[k]=v[i];
      k++;
    }
  }
  for (int values: v1)
  {
      if(values!=0){
      cout<<values<<" ";
      }
  }
  cout<<endl;
  for (int values: v2)
  {
      if(values!=0){
      cout<<values<<" ";
      }
  }
}
signed main()
{
    solve();
  return 0;
}
