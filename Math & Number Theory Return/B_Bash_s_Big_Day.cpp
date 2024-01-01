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
const ll mx=1e5+9; 
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    bool f=1;
    for(ll i=0;i<n;i++){
        if(a[i]!=1){f=0;break;}
    }
    if(f){
        cout<<1;return;
    }
    vector<ll>cnt(mx);
    for(ll i=0;i<n;i++){
        ll val=a[i];
        for(ll j=2;j*j<=val;j++){
            if(val%j==0){
                while(val%j==0){
                    val/=j;
                }
                cnt[j]++;
            }
        }
        if(val>1)cnt[val]++;
    }
    ll ans=0;
    for(ll i=0;i<mx;i++){
        ans=max(ans,cnt[i]);
    }
    cout<<ans;
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