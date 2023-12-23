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
bool vis[20];
void back(ll n,vector<ll>&v){
    if(v.size()==n){
        for(ll x:v)cout<<x<<" ";
        cout<<nl;
    }
    for(ll i=1;i<=n;i++){
        if(vis[i]==false){
            v.push_back(i);
            vis[i]=true;
            back(n,v);
            vis[i]=false;
            v.pop_back();
        }
    }
}
void solve(){
    ll n;cin>>n;
    memset(vis,false,sizeof(vis));
    vector<ll>v;
    back(n,v);
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}