//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18
//https://codeforces.com/problemset/problem/313/B
//solved using prefix sum easily


#include<bits/stdc++.h>
using namespace std;

#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define mod 1000000007

int pr[10000000];

int dp[10000][10000];
int dpa[10000][10000];

int lcs(string s1,string s2,int n,int m){
    if(n==0||m==0)return 0;
    if(dp[n][m]!=-1)return dp[n][m];
    if(s1[n-1]==s2[m-1]){return dp[n][m] =  1+lcs(s1,s2,n-1,m-1);}
    else return dp[n][m] =  max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
}

int lcsbotup(string s1,string s2,int n,int m){
    
    memset(dpa,0,sizeof(dpa));
    
    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {
        if(s1[i-1]==s2[j-1])dpa[i][j] = 1 + dpa[i-1][j-1];
        else dpa[i][j] =  max(dpa[i-1][j],dpa[i][j-1]);
    }
    return dpa[n][m];

}

void solve(){
    memset(dp,-1,sizeof(dp));
    string s1,s2;
    cin>>s1>>s2;
    cout<<lcsbotup(s1,s2,s1.length(),s2.length());
    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in", "r", stdin));
        assert(freopen(TASK".out", "w", stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
 
    return 0;
}