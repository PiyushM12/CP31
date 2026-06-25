#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){

    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int open =0;
    int ans =0;
    for(int i =0;i<n;i++){
        if(s[i]=='('){
            open++;
        }
        else{
            if(open>0)open--;
            else ans++;
        }
        
    }
    cout<<ans<<endl;
}
}