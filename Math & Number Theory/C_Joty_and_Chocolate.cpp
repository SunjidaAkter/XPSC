#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll red=(n/a)*p;
    ll blue=(n/b)*q;
    ll same=n/((a/__gcd(a,b))*b);
    ll ans=(red+blue)-(same*(p+q))+(same*max(p,q));
    cout<<ans<<"\n";
    return 0;
}