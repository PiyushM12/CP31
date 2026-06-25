#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    string s ;
    cin>>s;
    bool found = false;
    for(int i =0;i<n-1;i++){
        if(s[i+1]<s[i]){
            cout<<"YES"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            found = true;
            break;
        }
    }
    if(!found) cout<<"NO"<<endl;
}