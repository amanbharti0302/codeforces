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
#define foo for(int i=1;i<=n;i++)
#define mod 1000000007

void cal(int n,string s)
{
    vector<int> mem;
    int z=1,o=1;
    
    int i=0;
    while (i<n)
    {   
        if(s[i]=='0'){mem.push_back(z);z++;o--;o=max(o,1);if(z-1<o)z=o;}
        if(s[i]=='1'){mem.push_back(o);o++;z--;z=max(z,1);if(o-1<z)o=z;}
        i++;
    }

    int maxm =0;
    for(int i=0;i<mem.size();i++){
        if(mem[i]>maxm)maxm=mem[i];
    }
    
    cout<<maxm<<endl;
    for(int i=0;i<mem.size();i++){
        cout<<mem[i]<<" ";
    }
    br;

}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    cal(n,s);
    
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