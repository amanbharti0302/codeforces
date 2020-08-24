// A disjoint-set data structure is a data structure that keeps track of a set of elements partitioned into a number of disjoint (non-overlapping) subsets.
// A union-find algorithm is an algorithm that performs two useful operations on such a data structure:
// Find: Determine which subset a particular element is in. This can be used for determining if two elements are in the same subset.
// Union: Join two subsets into a single subset.

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

///////////////////////adjacency set type graph
class graph{
    int v;
    list<pair<int,int>>l;
    
    public:
    graph(int v){
        this->v = v;
    }

    int addEdge(int u,int v){
        l.push_back(make_pair(u,v));
    }
    int findSet(int i,int parent[]){
        if(parent[i]==-1)return i;
        return findSet(parent[i],parent);
    }
    void unionSet(int x,int y,int parent[]){
        int s1 = findSet(x,parent);
        int s2 = findSet(y,parent);
        if(s1!=s2){parent[s1] = s2;}
    }
    bool contain_cycle(){
        int *parent = new int[v+1];
        for(int i=0;i<v+1;i++)parent[i]=-1;

        for(auto edge:l){
            int i = edge.first;
            int j= edge.second;

            int s1 = findSet(i,parent);
            int s2 = findSet(j,parent);

            if(s1!=s2){unionSet(s1,s2,parent);}
            else return true;
        }

        delete[] parent;
        return false;
    }
};

void solve(){
    graph g(4);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,1);
    cout<<g.contain_cycle();
    br;
}

int main(){
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