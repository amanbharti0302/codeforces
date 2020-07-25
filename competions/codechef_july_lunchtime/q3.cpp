//CODECHEF:-
//coded by AMAN BHARTI
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


long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


ll binary(ll x,ll y){

    string x1,x2 ;
    while(x>0){
        x1= x1+char(x%2+'0');
        x/=2;
    }

    while(y>0){
        x2= x2+char(y%2+'0');
        y/=2;
    }

    string s1,s2;
    s1 = x1+x2;
    s2 = x2+x1;

    ll num1=0,num2=0;

    for(ll i=0;i<s1.length();i++){num1+=binpow(2,i)*(s1[i]-'0');}
    for(ll i=0;i<s2.length();i++){num2+=binpow(2,i)*(s2[i]-'0');}

    return abs(num1-num2);
}

void solve(){
    int n;
    cin>>n;

    ll a[n];
    fo{cin>>a[i];}

    ll maxm=0;

    sort(a,a+n);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            ll ans = binary(a[i],a[j]);
            if(ans>maxm)maxm=ans;
        }
    }

    cout<<maxm;
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