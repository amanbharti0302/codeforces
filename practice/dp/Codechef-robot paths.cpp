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
#define mod2 1000000007

int dp[10000][10000];

void solve(){
    memset(dp,-1,sizeof(dp));

    ll m,n,p;
    cin>>m>>n>>p;

    while(p-->0){
        ll x,y;
        cin>>x>>y;
        dp[x][y]=0;
    }
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(dp[i][j]==0)continue;
            if(i==1&&j==1){dp[i][j]=1;continue;}
            
            if(i==1){dp[i][j]=dp[i][j-1];continue;}
            if(j==1){dp[i][j]=dp[i-1][j];continue;}

            dp[i][j] = dp[i-1][j]+dp[i][j-1];
        }
    }

    cout<<dp[m][n];
    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in","r",stdin));
        assert(freopen(TASK".out","w",stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
 
    return 0;
}