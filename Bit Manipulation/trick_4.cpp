//*count set bit
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int ans=0;
    while(n>0){
        // ans+=n%10;
        ans+=n&1;
        // n/=10;
        n>>=1;
    }
    cout<<ans<<endl;
    return 0;
}