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

//   assert(freopen("soln.in","r",stdin));
//   assert(freopen("soln.out","w",stdout));

  int test;
  cin>>test;
  while(test-->0){
    int n,k;
    cin>>n>>k;
    string a,b;
    cin>>a>>b;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int c1[28]={0},c2[28]={0};

    for(int i=0;i<n;i++)
    c1[a[i]-'a']++,c2[b[i]-'a']++;

    bool ch=true;
    
    int cnt=0;

    for(int i=0;i<26;i++){
      if((c1[i]<c2[i]&&(c2[i]-c1[i])%k>0)||((c1[i]-c2[i])%k>0)){ch=false;break;}
      cnt+=c1[i]-c2[i];
      if(cnt<0){ch=false;break;}
    }

    if(ch==true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

  }

  return 0;
}