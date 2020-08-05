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
#define foo for(int i=1;i<=n;i++)
#define mod 1000000007



void solve(){
    int n;
    cin>>n;
    int w[n];

    fo{cin>>w[i];}
    sort(w,w+n);

    int maxm =0;

    for(int i=2;i<150;i++){
        int j=0,k=n-1;
        int cnt =0;

        while(j<k){
            if(w[j]+w[k]==i){cnt++;j++;k--;}
            else if(w[j]+w[k]>i)k--;
            else j++;
        }

        maxm = max(cnt,maxm);
    }

    cout<<maxm<<endl;
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