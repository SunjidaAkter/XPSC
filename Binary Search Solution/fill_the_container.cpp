#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n,m;
    while(cin>>n>>m){
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int l=0,r=INT_MAX,ans;
        while(l<=r){
            int cap=l+(r-l)/2;
            int container=1;
            int sum=0;
            for(int i=0;i<n;i++){
                if(a[i]>cap){
                    container=INT_MAX;
                    break;
                }
                sum+=a[i];
                if(sum>cap){
                    container++;
                    sum=a[i];
                }
            }
            if(container<=m){
                ans=cap;
                r=cap-1;
            }else l=cap+1;
        }
        cout<<ans<<endl;
    }
    return 0;
}