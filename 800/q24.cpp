#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans =0;
        int n ;
        
        cin>>n;
        int t =n;
        while(n--){
             int x ;
             cin>>x;
             ans^=x;
        }
        if(t%2!=0){
            cout<<ans<<endl;
        }
        else{
            if(ans==0)cout<<1<<endl;
            else cout<<-1<<endl;
            
        }
    }
}