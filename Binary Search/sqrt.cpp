#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
bool areSame(double a,double b){
    return fabs(a-b)<1e-8;
}
int main(){
    double n;cin>>n;
    double l=0.0;
    double r=n;
    while((r-l)>=1e-8){
        double mid=l+(r-l)/2;
        double val=mid*mid;
        if(areSame(val,n)){
            cout<<mid<<endl;
            break;
        }else if(val>n){
            r=mid;
        }else{
            l=mid;
        }
    }
    return 0;
}