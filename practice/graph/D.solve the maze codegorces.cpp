//https://codeforces.com/contest/1365/problem/D
//solved using dfs and flood fill algorithm

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

int n,m;
char a[52][52];

int visited[52][52];

int ans =1;
int cntgood;
int cntgafterblock;


void dfs_helper(int i ,int j){

    if(i<1||j<1||i>n||j>m)return;

    visited[i][j]=1;
    if(a[i][j]=='G')cntgafterblock++;

    if(visited[i-1][j]==0&&(a[i-1][j]=='.'||a[i-1][j]=='G'))dfs_helper(i-1,j);
    if(visited[i][j-1]==0&&(a[i][j-1]=='.'||a[i][j-1]=='G'))dfs_helper(i,j-1);
    if(visited[i+1][j]==0&&(a[i+1][j]=='.'||a[i+1][j]=='G'))dfs_helper(i+1,j);
    if(visited[i][j+1]==0&&(a[i][j+1]=='.'||a[i][j+1]=='G'))dfs_helper(i,j+1);
    
    return;
}

void dfs(int i,int j){
    dfs_helper(i,j);
}


void solve()
{   
    ans=1;
    memset(visited,0,sizeof(visited));
    
    for(int i=0;i<52;i++)
    for(int j=0;j<52;j++)
    a[i][j]='a';

    cin>>n>>m;

    cntgafterblock=0;
    cntgood=0;

    for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    {cin>>a[i][j];
    if(a[i][j]=='G')cntgood++;}


    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++){
            if(a[i][j]=='B'){
                if(a[i-1][j]=='.')a[i-1][j]='#';
                if(a[i][j-1]=='.')a[i][j-1]='#';
                if(a[i+1][j]=='.')a[i+1][j]='#';
                if(a[i][j+1]=='.')a[i][j+1]='#';

                if(a[i-1][j]=='G')ans=0;
                if(a[i][j-1]=='G')ans=0;
                if(a[i+1][j]=='G')ans=0;
                if(a[i][j+1]=='G')ans=0;
            }
        }
    }


    if(ans==0){cout<<"NO"<<endl;return;}
    if(cntgood>0&&a[n][m]=='#'){cout<<"NO"<<endl;return;}
    if(cntgood==0&&a[n][m]=='#'){cout<<"YES"<<endl;return;}

    dfs(n,m);

    if(cntgafterblock==cntgood){cout<<"YES";}
    else{cout<<"NO";}

    br;
}
int main()
{
	#ifdef home
        assert(freopen(TASK".in","r",stdin));
        assert(freopen(TASK".out","w",stdout));
    #endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t-->0)
    {solve();}

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif

    return 0;
}