//Cooded by Aman Bharti (ECE 2k18) Nit Patna
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int test;
  cin>>test;
  while(test-->0){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    int minm = INT_MAX,cnt=0;
    ll sum=0;

    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
    cin>>a[i][j];
    sum+=abs(a[i][j]);
    minm = min(minm,abs(a[i][j]));
    if(a[i][j]<0)cnt++;
    }

    //cout<<minm<<" ";
    if(cnt%2==0)cout<<sum<<endl;
    else cout<<sum-(2*minm)<<endl;
  }

  return 0;
}