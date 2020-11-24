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
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;

    while(q-->0){
      int l,r;
      cin>>l>>r;
      l--;r--;
      char lc = s[l],rc=s[r];
      bool ch=false;

      for(int i=l-1;i>=0;i--)if(s[i]==lc){ch=true;break;}
      for(int i=r+1;i<n;i++)if(s[i]==rc){ch=true;break;}
      
      if(ch==true)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

    }

  }

  return 0;
}