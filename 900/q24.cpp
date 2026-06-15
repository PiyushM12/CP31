#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
            long long a,b;
    cin>>a>>b;
    long long diff=abs(a-b);
    if(diff==0){
        cout<<0<<" "<<0<<endl;
       continue;
    }
    long long num = min(a,b);
    long long q= num%diff;
    long long ans;
    if(q>num){
        ans = (diff-q);
    }
    else{
        ans= min(q,diff-q);
    }
    cout<<diff<<" "<<ans<<endl;
    }

}