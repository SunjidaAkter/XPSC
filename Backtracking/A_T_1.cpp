// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// typedef pair<ll,ll>pii;
// #define forl(var,str,end) for(long long int var=str; var<end; var++)
// ll n,sum=0,ans;
// ll a[22];
// void back(ll i,ll s){
//     if(i==n){
//         ans=min(ans,abs((sum-s)-s));
//         return;
//     }
//     // cout<<i<<"here";
//     back(i+1,s);
//     // cout<<i<<"there";
//     back(i+1,s+a[i]);

// }
// int main(){
//     cin>>n;
//     for(ll i=0;i<n;i++){
//         cin>>a[i];
//         sum+=a[i];
//     }
//     ans=sum;
//     back(0,0);
//     cout<<ans;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool vis[20];
ll n,a[22],sum=0,ans;
void back(ll n,vector<ll>&v){
    ll s1=0;
    for(ll x:v)s1+=a[x];
    ll s2=sum-s1;
    ans=min(ans,abs(s2-s1));
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
int main(){
    cin>>n;
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    ans=sum;
    vector<ll>v;
    back(n,v);
    cout<<ans;
    return 0;
}