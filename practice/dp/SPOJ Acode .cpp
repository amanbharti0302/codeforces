//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18

#include<bits/stdc++.h>
using namespace std;

//#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define pb push_back
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define foo for(int i=1;i<=n;i++)
#define mod 1000000007

ll dp[100000];

ll cal(string s, ll n){
    if(n==1||n==0){return 0;}

    if(dp[n]!=0)return dp[n];

    if((s[n-1]-'0')==0){return dp[n] = cal(s,n-2);}

    if((s[n-2]-'0')==0){return cal(s,n-1);}

    int x=((s[n-2]-'0')*10)+(s[n-1]-'0');
    if(x<=26){return dp[n] =  1+cal(s,n-2)+cal(s,n-1);}
    else return dp[n] = cal(s,n-1);
}

void solve(){
    string n;
    while(cin>>n){
        if(n=="0")break;
        memset(dp,0,sizeof(dp));
        
        cout<<cal(n,n.length())+1;
        br;
    }   
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