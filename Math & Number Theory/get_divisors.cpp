#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
vector<int> getdiv(int n){
    vector<int> ans;
    for (int i = 1; i * i <= n; i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i){
                ans.push_back(n / i);
            }
        }
    }
    return ans;
}
int main(){
    int n=100;
    vector<int> ans=getdiv(n);
    sort(ans.begin(),ans.end());
    for(int val:ans)cout<<val<<" ";
    return 0;
}//*O(sqrt(n))