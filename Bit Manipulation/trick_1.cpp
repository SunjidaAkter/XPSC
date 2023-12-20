//* X^X=0;
#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ans=ans^a;
    }
    cout<<ans<<endl;
    return 0;
}