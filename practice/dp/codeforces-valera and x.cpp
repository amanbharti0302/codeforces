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



void solve(){
    int n;
    cin>>n;

    int ch =0;
    char d;
    char r;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char x;
            cin>>x;
            if(i==0&&j==0){d=x;continue;}
            if(i==0&&j==1){r=x;continue;}

            if((i==j||i+j==n-1)&&x!=d){ch=1;continue;}
            if((i!=j&&i+j!=n-1)&&x!=r){ch=1;}
        }
    }

    if(d==r)ch=1;
    
    if(ch==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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