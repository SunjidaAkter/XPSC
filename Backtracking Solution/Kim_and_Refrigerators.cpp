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
typedef pair<ll,ll>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
ll n,mn,si,sj,di,dj;
vector<pii> a(15);
bool vis[15];
void back(ll n,vector<ll>&v){
    if(v.size()==n){
        ll sum=0;
        ll lasti=si;
        ll lastj=sj;
        for(ll i=0;i<n;i++){
            sum+=(abs(lasti-a[v[i]].first)+abs(lastj-a[v[i]].second));
            lasti=a[v[i]].first;
            lastj=a[v[i]].second;
        }
        sum+=(abs(lasti-di)+abs(lastj-dj));
        mn=min(mn,sum);
    }
    for(ll i=1;i<=n;i++){
        if(!vis[i]){
            vis[i]=true;
            v.push_back(i);
            back(n,v);
            vis[i]=false;
            v.pop_back();
        }
    }
}
ll cs=1;
void solve(){
    cin>>n;
    cin>>si>>sj>>di>>dj;
    for(ll i=1;i<=n;i++){
        cin>>a[i].first>>a[i].second;
    }
    memset(vis,false,sizeof(vis));
    vector<ll>v;
    mn=INT_MAX;
    back(n,v);
    cout<<"# "<<cs++<<" "<<mn<<nl;
}
int main(){
    FAST;
    int t=10;
    while(t--){
        solve();
    }
    return 0;
}