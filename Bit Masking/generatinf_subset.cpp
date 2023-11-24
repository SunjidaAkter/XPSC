#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    vector<vector<int>>subsets;
    //* total time complexity n*2^n => 2^n
    for(int i=0;i<(1<<n);i++){//*time complexity 2^n //? 2^n==1<<n;
    vector<int>subset;
        for(int j=0;j<n;j++){//*time complexity n
            int mask=1<<j;
            if((i&mask)==0){
                // cout<<"nibo na"<<endl;
            }else{
                // cout<<"nibo"<<endl;
                subset.push_back(a[j]);
            }
        }
        subsets.push_back(subset);
        // cout<<endl;
    }
    for(int i=0;i<subsets.size();i++){
        cout<<"[ ";
        for(int j=0;j<subsets[i].size();j++){
            cout<<subsets[i][j]<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}