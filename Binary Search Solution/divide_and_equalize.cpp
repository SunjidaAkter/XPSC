#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0,r=INT_MAX;
        bool finalans=false;
        while(l<=r){
            int mid=l+(r-l)/2;
            double ans=1.0;
            for(int i=0;i<n;i++){
                ans*=(a[i]*1.0/mid);
            }
            if(fabs(ans-1.0)<1e-15){
                finalans=true;
                break;
            }else if(ans>1.0){
                l=mid+1;
            }else r=mid-1;
        }
        if(finalans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}