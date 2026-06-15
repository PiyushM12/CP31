#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n ;
       cin>>n;
       if(n<10){
        cout<<n<<endl;
       }
       else if (n>=10 && n<100){
        int ans  = 9 + n/10;
        cout<<ans<<endl;
       }
       else if (n>=100 && n<1000){
        int ans  = 18 + n/100;
        cout<<ans<<endl;
       }
       else if (n>=1000 && n<10000){
        int ans  = 27 + n/1000;
        cout<<ans<<endl;
       }
       else if (n>=10000 && n<100000){
        int ans  = 36+ n/10000;
        cout<<ans<<endl;
       }
       else if (n>=100000 && n<1000000){
        int ans  = 45 + n/100000;
        cout<<ans<<endl;
       }
       else{
        int ans = 54+n/1000000;
        cout<<ans<<endl;
       }
    }
}