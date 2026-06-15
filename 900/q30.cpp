#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n  = s.size();
        int zero =0;
        int one =0;
        for(int i  =0;i<n;i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        int num = min(one,zero);
        if(num%2==0)cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
      

    }
}