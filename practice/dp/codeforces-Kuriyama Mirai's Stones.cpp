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


///solved using prefix sum

void solve(){
    ll n;
    cin>>n;
    ll a[n+1],b[n+1];
    a[0]=0;b[0]=0;

    for(ll i=1;i<n+1;i++){cin>>a[i];b[i]=a[i];}

    sort(b,b+n+1);
    for(ll i=2;i<=n;i++){
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }

    ll m;
    cin>>m;

    for(ll i=0;i<m;i++){
        ll op,l,r;
        cin>>op>>l>>r;
        if(op==1){
            cout<<a[r]-a[l-1]<<endl;
        }
        else cout<<b[r]-b[l-1]<<endl;
    }

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
    // cin>>t;
    // while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
 
    return 0;
}