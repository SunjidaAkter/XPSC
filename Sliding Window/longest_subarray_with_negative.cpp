#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int a[n];
    forl(i,0,n)cin>>a[i];
    int s;cin>>s;
    int i=0,j=0,sum=0,mx=0;
    map<int,int>mp;
    vector<int>v;
    forl(i,0,n){
        sum+=a[i];
        if(sum==s)v.push_back(i+1);
        if(sum>s){
            if(mp.find(sum-s)!=mp.end()){
                v.push_back(i-mp[sum-s]);
            }
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
    return 0;
}