#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n=28;
    map<int,int>cnt;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cnt[i]++;
            n/=i;
        }
    }
    if(n>1)cnt[n]++;
    for(auto it:cnt)cout<<it.first<<"->"<<it.second<<"\n";
    return 0;
}//*complexity without mp is O(sqrt(n))