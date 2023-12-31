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
class WarmHoles{
    public:
    ll si,sj,di,dj,c;
};
ll n,mn,si,sj,di,dj;
vector<WarmHoles> a(10);
bool vis[15];
void back(ll n,vector<ll>&v){
    ll sum=0;
    ll lasti=si;
    ll lastj=sj;
    for(ll i=0;i<v.size();i++){
        sum+=(abs(lasti-a[v[i]].si)+abs(lastj-a[v[i]].sj)+a[v[i]].c);
        lasti=a[v[i]].di;
        lastj=a[v[i]].dj;
    }
    sum+=(abs(lasti-di)+abs(lastj-dj));
    ll sum2=0;
    ll last2i=si;
    ll last2j=sj;
    for(ll i=0;i<v.size();i++){
        sum2+=(abs(last2i-a[v[i]].di)+abs(last2j-a[v[i]].dj)+a[v[i]].c);
        last2i=a[v[i]].si;
        last2j=a[v[i]].sj;
    }
    sum2+=(abs(last2i-di)+abs(last2j-dj));
    mn=min({mn,sum2,sum});
    
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
void solve(){
    cin>>n;
    cin>>si>>sj>>di>>dj;
    for(ll i=1;i<=n;i++){
        cin>>a[i].si>>a[i].sj>>a[i].di>>a[i].dj>>a[i].c;
    }
    memset(vis,false,sizeof(vis));
    vector<ll>v;
    mn=INT_MAX;
    back(n,v);
    cout<<mn<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}