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


//similar to kadanes algorithm
int maxsumarray(int a[],int n){
    int lmax=1,gmax=1,lastnum=a[0];
    
    for(int i=1;i<n;i++){
        a[i]>=lastnum?lmax++:lmax=1;
        lastnum=a[i];
        gmax = max(lmax,gmax);
    }
    return gmax;
}

void solve(){
    int n;
    cin>>n;
    int a[n];
    fo{cin>>a[i];}
    cout<<maxsumarray(a,n);
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