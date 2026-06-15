#include<bits/stdc++.h>
#include <numeric> 
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        bool flag = false;
        for(int i =0;i<n;i++){
            for(int j =i+1;j<n;j++){
                if(gcd(v[i],v[j])<=2){
                    if(!flag){
                        cout<<"YES"<<endl;
                    flag = true;
                    }
                   
                    break;
                }
            }
        }
        if(!flag) cout<<"NO"<<endl;
    }
}