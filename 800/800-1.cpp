#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
    cin>>n>>k;
    vector<int>v(n,0);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    if(k<2){
        bool rev= true;
    for(int i =0;i<n-1;i++){
            if(v[i]>v[i+1]){
                rev= false;
                break;
            }
    }
    if(rev){
        cout<<"Yes\n";
    }
    else cout<<"no\n";
    continue;
    }
    for(int i =0;i<n;i++){
        for(int  j =0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
    bool rev= true;
    for(int i =0;i<n-1;i++){
            if(v[i]>v[i+1]){
                rev= false;
                break;
            }
    }
    if(rev){
        cout<<"Yes\n";
    }
    else cout<<"no\n";
 }
}
