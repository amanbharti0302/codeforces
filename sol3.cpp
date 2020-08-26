//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18
#include<bits/stdc++.h>
using namespace std;

#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define pb push_back
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define foo for(int i=1;i<=n;i++)
#define mod 1000000007

int dp[1000005];


int cal(int a[],int n,int cnt,int sum){
    if(n<1){return 0;}
    
    if(a[n]==sum)return min(cnt,cal(a,n-1,cnt,sum));
    return min(cal(a,n-1,cnt+1,sum),cal(a,n-1,cnt,sum));
}

void solve(){
    memset(dp,-1,sizeof(dp));
    int n,sum=0;
    cin>>n;
    int a[n+1];
    foo{cin>>a[i];sum=sum|a[i];}
    sort(a+1,a+n+1);
    cout<<cal(a,n,1,sum)<<" ";
    cout<<sum;
    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in","r",stdin));
        assert(freopen(TASK".out","w",stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif

    return 0;
}