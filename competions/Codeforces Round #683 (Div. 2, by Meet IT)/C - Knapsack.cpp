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
    int n;
    double w;
    cin>>n>>w;
    vector<pair<int,int>>a;

    for(int i=1;i<=n;i++){
      int x;
      cin>>x;
      a.push_back({x,i});
    }
    
    sort(a.begin(),a.end());
    int p1=0,p2=0;
    double sum=0;
    sum+=a[0].first;
  

    while(p1<n&&p2<n&&p1<=p2){
      if(sum>=(w/2)&&(sum<=w))break;
      else if(sum>w){sum-=a[p1].first;p1++;}
      else if(sum<(w/2)&&p2<n-1){p2++;sum+=a[p2].first;}
      else break;
    }

    //cout<<p1<<" "<<p2<<" ";
    if(p1>p2)cout<<-1<<endl;
    else 
    {
      vector<int> sol;

      double temp =0;
      for(int i=p1;i<=p2;i++)
      {sol.push_back(a[i].second);temp+=a[i].first;}
      
      sort(sol.begin(),sol.end()); 

      if(temp>=double(w/2)&&temp<=w)
      {
        cout<<p2-p1+1<<" "<<endl;
        for(auto x:sol)cout<<x<<" ";
      }
      else cout<<-1;
      cout<<endl;
    }

  }

  return 0;
}