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

ll b[100008];

void solve(){
    memset(b,0,sizeof(b));
    ll n;
    cin>>n;
    ll a[n];
    ll maxm=0;
    fo{cin>>a[i];b[a[i]]++;maxm = max(b[a[i]],maxm);}

    ll cntmaxm=0,rem=0;
    
    for(int i=0;i<100008;i++){if(b[i]==maxm)cntmaxm++; else rem++;}

    rem+=rem/maxm;
    cntmaxm--;
    cntmaxm+=rem;
    cout<<cntmaxm;
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