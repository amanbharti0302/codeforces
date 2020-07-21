//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18

#include<bits/stdc++.h>
using namespace std;

#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)

int dp[10000000];

int cal(int n){
    if(n<=0)return 0;

    if(dp[n]!=-1)return dp[n];

    int cal2=INT_MAX,cal3=INT_MAX;

    if(n-10>=0)cal3 = cal(n-1);
    if(n-7>=0)cal2 = cal(n-7);

    return dp[n] = 1 + min(min(cal(n-1),cal2),cal3);
}

int calbu(int n){
    int dpa[100000];
    memset(dpa,-1,sizeof(dpa));

    dpa[0]=0;


    for(int i=1;i<=n;i++){
        int cal3=INT_MAX,cal2=INT_MAX,cal1;

        if(i-7>=0)cal3=dpa[i-7];
        if(i-10>=0)cal2=dpa[i-10];
        cal1= dpa[i-1];
        dpa[i] = 1+min(cal1,min(cal3,cal2));
    }

    return dpa[n];
}

void solve(){
    //memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<calbu(n);
    br;
}

int main(){
	#ifdef home
        assert(freopen(TASK".in", "r", stdin));
        assert(freopen(TASK".out", "w", stdout));
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