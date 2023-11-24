#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;//*any number like 10
    int x;cin>>x;//*position of a bit in binary number|| binary of 10 is 1010, if x=2 that means the second position of 1010 which is 0
    int mask=1<<x;//*0100
    if((n&mask)==0)cout<<0;
    else cout<<1;
    return 0;
}