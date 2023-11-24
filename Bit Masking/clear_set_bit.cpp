#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int i;cin>>i;
    int mask=1<<i;
    int x=63;
    int newmask=(x^mask);
    int ans=(n&newmask);
    cout<<ans;
    return 0;
}