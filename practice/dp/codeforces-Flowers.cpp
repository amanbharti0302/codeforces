//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18

#include<bits/stdc++.h>
using namespace std;

//#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define mod 1000000007


ll dp[10000000];
ll pr[10000000];

ll cal(ll n,ll k){
    if(n==0)return 1;

    if(dp[n]!=-1)return dp[n];

    ll sum=0;
    if(n>=k)sum=(sum+cal(n-k,k))%mod;
    sum=(sum+cal(n-1,k))%mod;
    return dp[n]=sum;
}

void solve(int k){
    ll a,b;
    cin>>a>>b;
    cout<<(pr[b]-pr[a-1]+mod)%mod;
    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in", "r", stdin));
        assert(freopen(TASK".out", "w", stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    memset(dp,-1,sizeof(dp));
    ll t,k;
    cin>>t>>k;
    
    pr[0]=0;
    for(ll i=1;i<10000000;i++){pr[i] = (pr[i-1]+cal(i,k))%mod;}
    
    while(t-->0)
    solve(k);

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
 
    return 0;
}