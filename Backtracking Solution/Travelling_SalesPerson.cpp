#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
ll n,mn;
ll a[15][15];
bool vis[15];
void back(ll n,vector<ll>&v){
    if(v.size()==n){
        
    }
    for(ll i=0;i<n;i++){
        if(!vis[i]){
            vis[i]=true;
            v.push_back(i);
            back(n,v);
            vis[i]=false;
            v.pop_back();
        }
    }
}
void solve(){
    cin>>n;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    vector<ll>v;
    mn=INT_MAX;
    back(n-1,v);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}