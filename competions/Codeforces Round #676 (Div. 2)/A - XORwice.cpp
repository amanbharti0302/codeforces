    //coded by AMAN BHARTI NIT PATNA ECE 2K18
    #include<bits/stdc++.h>
    using namespace std;
    #define mod 1000000007LL


    int main(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        int t;
        cin>>t;
        while(t-->0){
            long long a,b;
            cin>>a>>b;
            long long an = a&b;
            //cout<<an<<" ";
            cout<<(an^a)+(an^b)<<endl;
        }
        return 0;
    }