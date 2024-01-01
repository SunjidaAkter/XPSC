#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
void solve(){
    ll n=10;
    vector<ll>div[n+1];
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j+=i){
            div[j].push_back(i);
        }
    }
    for(ll i=1;i<=n;i++){
        cout<<i<<" -> ";
        for(ll val:div[i]){
            cout<<val<<" ";
        }
        cout<<nl;
    }
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}