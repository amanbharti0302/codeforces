//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18
//https://codeforces.com/contest/1343
//B. ARRAY WALk
//solved by dp


#include<bits/stdc++.h>
using namespace std;

//#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define mod 1000000007

int dp[100008][7];

int cal(int a[],int n,int k,int z,int p){
    if(p<=0||p>n||k<0)return 0;

    if(dp[k][z]!=-1)return dp[k][z];

    if(z>=1)return dp[k][z] = a[p]+max(cal(a,n,k-1,z,p+1),cal(a,n,k-1,z-1,p-1));

    return dp[k][z] =  a[p]+cal(a,n,k-1,z,p+1);
}


void solve(){
    memset(dp,-1,sizeof(dp));
    int n,k,z;
    cin>>n>>k>>z;
    int a[n+1];
    for(int i=1;i<=n;i++){cin>>a[i];}
    
    cout<<cal(a,n,k,z,1);
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