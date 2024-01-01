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
    vector<bool>prime(n+1);
    for(ll i=2;i*i<=n;i++){
        if(!prime[i]){
            for(ll j=i*i;j<=n;j+=i){
                prime[j]=true;
            }
        }
    }
    for(ll i=2;i<=n;i++){
        if(!prime[i]){
            cout<<i<<" ";
        }
    }
    cout<<nl;
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