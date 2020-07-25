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

void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int sum1;

    int n1 , n2;
    if(2*x<=y){
        n1 = x;
        n2=x;

         int maxsum= (((m+1)/2)*n1) + ((m/2)*n2);
         int minsum = (((m+1)/2)*n2) + ((m/2)*n1);

         sum1= (((n+1)/2)*maxsum) + ((n/2)*minsum);
    }
    else if (x>=y){
        n1 = y;
        n2 = 0;

        int k=0;

        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            int rem ;
            if(i==n-1||j==m-1){
                if(k%2==0)rem = n1;
                else rem =1;
                continue;       
            }
            if(k%2==0)rem = n1-1;
            else rem =1;
            k++;
        }


        sum1=0;
    }
    else {
        n1 = x;
        n2 = y-x;

         int maxsum= (((m+1)/2)*n1) + ((m/2)*n2);
         int minsum = (((m+1)/2)*n2) + ((m/2)*n1);

         sum1= (((n+1)/2)*maxsum) + ((n/2)*minsum);
    }

    int a[n][m];
    memset(a,0,sizeof(a));


    // int maxsum= (((m+1)/2)*n1) + ((m/2)*n2);
    // int minsum = (((m+1)/2)*n2) + ((m/2)*n1);

    // int sum1= (((n+1)/2)*maxsum) + ((n/2)*minsum);

    cout<<sum1;
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