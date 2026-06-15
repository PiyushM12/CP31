#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int>v(n,0);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        for(int i =0;i<n;i++){
           v[i]%=2;
        }
        int cnt=0;
        for(int i =1;i<n;i++){
            if(v[i]==v[i-1]){
                cnt++;
            }
        }
        cout<<cnt<<endl;

    }
}