#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool prime(int a){
    if (a == 1 || a == 0)
        return false;
    for (int i=2; i*i <= a; i++)
        if (a % i == 0)
            return false;
    return true;
}
int main(){
    ll n;cin>>n;
    if(prime(n)){
        cout<<1;
    }else{
        if(n%2==1){
            if(prime(n-2)){
                cout<<2;
            }else cout<<3;
        }else{
            cout<<2;
        }
    }
    return 0;
}