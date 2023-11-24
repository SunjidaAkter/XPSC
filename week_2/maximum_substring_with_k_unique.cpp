#include<bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll,ll>pii;
#define forl(var,str,end) for(long long int var=str; var<end; var++)
int main(){
    string s;cin>>s;
    int n=s.size();
    // int k;cin>>k;
    int i=0,j=0,mx=0;
    int fr[26]={0};
    vector<int>v;
    int unq=0;
    while(j<n){
        fr[s[j]-'a']++;
        char ch;int l;
        if(fr[s[j]-'a']==1)unq++;
        if(fr[s[j]-'a']>1){
            ch=s[j]-'a';
            // cout<<s[j]<<",";
            fr[s[j]-'a']--;
            while(fr[s[i]-'a']!=0){
                // cout<<s[i]<<";";
                if(ch==(s[i]-'a'))l=i;
                fr[s[i]-'a']--;
                i++;
            }
            unq=1;
            fr[s[j]-'a']=1;
            if(j<n-1)j=l+1;
        }
        // cout<<unq<<" ";
        if(mx<unq){
            mx=unq;
        }
            // cout<<unq<<" ";
        // if(unq==k)v.push_back(j-i+1);
        // while(unq>k){
        //     fr[s[i]-'a']--;
        //     if(fr[s[i]-'a']==0)unq--;
        //     i++;
        // }
        j++;
    }
    // sort(v.begin(),v.end());
    // cout<<v[v.size()-1];
            cout<<mx<<" ";
    return 0;
}