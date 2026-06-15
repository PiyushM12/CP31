#include<bits/stdc++.h>
using namespace std;
// bool div(long long n){
//     for(int i =2;i*i<=n;i++){
//         int cnt =0;
//         while(n%i==0){
//             cnt++;
//             n/=i;
//         }
//         if(cnt&&i%2) return true;
//     }
//     if(n>1&&n%2) return true;
//     return false;
// }
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        // bool b= div( n);
        // if(b){
        //     cout<<"Yes"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
        // this was not required
        // a number  is a power of two only if (n&n-1)==0;
        if((n&(n-1))==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}