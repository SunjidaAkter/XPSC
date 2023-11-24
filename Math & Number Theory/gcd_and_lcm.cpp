#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int a=4,b=6;
    int GCD=__gcd(a,b);
    int LCM=(a/GCD)*b;
    cout<<GCD<<" "<<LCM<<endl;
    return 0;
}