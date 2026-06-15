#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int>v(n*k);
       for(int i =0;i<n*k;i++){
        cin>>v[i];
       }
       long long ans =0;
       if(n%2==0){
        int l = n/2;
        l+=1;
        int j = n*k;
        for(int i =0;i<k;i++){
            j-=l;
            ans+=v[j];
        }
       }
       else{
        int l = (n+1)/2;
        int j = n*k;
        for(int i =0;i<k;i++){
            j-=l;
            ans+=v[j];
        }
       }
       cout<<ans<<endl;
    }

}