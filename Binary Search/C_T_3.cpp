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
bool isValid(int dif,int a[],int n,int c){
    int cnt=1;
    int last=0;
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[last])>=dif){
            cnt++;
            last=i;
        }
    }
    return (cnt>=c);
}
void solve(){
    int n,c;cin>>n>>c;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int l=0,r=INT_MAX;
    int ans;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(isValid(mid,a,n,c)){
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}