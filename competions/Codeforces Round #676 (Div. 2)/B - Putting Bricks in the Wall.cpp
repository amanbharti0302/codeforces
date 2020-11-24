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
            long long n;
            cin>>n;
            char ar[n+1][n+1];
            for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            cin>>ar[i][j];

            int a= ar[1][2]-'0';
            int b= ar[2][1]-'0';
            int c= ar[n-1][n]-'0';
            int d= ar[n][n-1]-'0';
            
            if(a==b&&c==d&&a==c){
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(a==b&&c==d&&a!=c){
                cout<<0<<endl;
            }
            else if(a==b&&a==c&&c!=d){
                cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(a==b&&a==d&&c!=d){
                cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else if(c==d&&c==a&&a!=b){
                cout<<1<<endl;
                cout<<1<<" "<<2<<endl;
            }
            else if(c==d&&c==b&&b!=a){
                cout<<1<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(a!=b&&c!=d){
                cout<<2<<endl;
                if(a==c){
                    cout<<2<<" "<<1<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }
                else{
                    cout<<1<<" "<<2<<endl;
                    cout<<n-1<<" "<<n<<endl;
                }
            }

        }
        return 0;
    }