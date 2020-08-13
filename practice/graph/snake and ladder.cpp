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


template <typename T>
class Graph{
    map <T,list<T>> l;
    public:
    void addEdge(int x,int y){
        l[x].pb(y);
        // l[y].pb(x);
    }

    void bfs(T src,T dest){
        map<T,int> dist;
        queue <T> q;

        for(auto node_pair:l){
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }

        q.push(src);
        dist[src]=0;


        while(!q.empty()){
            T node = q.front();
            q.pop();
            //cout<<node;
            for(auto nbr:l[node]){
                if(dist[nbr]==INT_MAX){
                    q.push(nbr);
                    dist[nbr]=dist[node]+1;
                }
            }
        }

        cout<< dist[dest]<<" "<<endl;
        
    }

};

void solve()
{
    int board[50]={0};
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;

    Graph<int> g;

    for(int i=0;i<36;i++){
        for(int dice =1;dice<=6;dice++){
            int j= i+dice;
            j+=board[j];

            if(j<=36){
                g.addEdge(i,j);
            }
        }
    }
    g.addEdge(36,36);

    g.bfs(0,36);
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

    // int t;
    // cin>>t;
    // while(t-->0)
    solve();

    #ifdef home
        eprintf("Time: %d ms\n", (int)(clock() * 1000. / CLOCKS_PER_SEC));
    #endif

    return 0;
}