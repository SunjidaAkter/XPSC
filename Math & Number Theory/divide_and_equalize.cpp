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
void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>cnt;
    for(int k=0;k<n;k++){
        int curr=a[k];
        for(int i=2;i*i<=curr;i++){
            while(curr%i==0){
                cnt[i]++;
                curr/=i;
            }
        }
        if(curr>1)cnt[curr]++;
    }
    bool ok=1;
    for(auto it:cnt){
        if(it.second%n!=0){
            ok=0;
            break;
        }
    }
    if(ok)yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}