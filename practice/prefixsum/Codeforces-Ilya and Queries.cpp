//CODEFORCES:-
//coded by AMAN BHARTI NIT PATNA
//ALL RIGHTS RESERVED
//ECE 2K18
//https://codeforces.com/problemset/problem/313/B
//solved using prefix sum easily


#include<bits/stdc++.h>
using namespace std;

//#define home
#define TASK "soln"
#define eprintf(...) fprintf(stderr, __VA_ARGS__),fflush(stderr)
#define ll long long int
#define br cout<<endl;
#define fo for(int i=0;i<n;i++)
#define mod 1000000007

int pr[10000000];

void solve(){
    string s;
    cin>>s;
    int m;
    cin>>m;

    pr[0]=0;

    for(int i=0;i<s.length()-1;i++){if(s[i]==s[i+1])pr[i+1]=1;}

    for(int i=1;i<s.length();i++)pr[i]+=pr[i-1];

    while(m-->0){
        int l, r;
        cin>>l>>r;
        cout<<pr[r-1]-pr[l-1];
        br;
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
    // while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif
 
    return 0;
}