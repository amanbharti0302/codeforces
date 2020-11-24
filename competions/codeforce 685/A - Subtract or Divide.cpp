////////////////////      We are not beautiful     /////////////////////////////////

//Coded by Aman Bharti (ECE 2k18) Nit Patna

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  // assert(freopen("soln.in","r",stdin));
  // assert(freopen("soln.out","w",stdout));

  int test;
  cin>>test;
  while(test-->0){
    int n;
    cin>>n;
    if(n==1)cout<<0<<endl;
    else if(n==2)cout<<1<<endl;
    else if(n==3)cout<<2<<endl;
    else if(n%2==0)cout<<2<<endl;
    else cout<<3<<endl;
  }

  return 0;
}