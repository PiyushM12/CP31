#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n,0);
        for(int i  =0;i<n;i++){
            cin>>v[i];
        }
        int mini= v[0];
        for(int i =1;i<n;i++){
            mini= max(mini,v[i]-v[i-1]);
        }
        mini= max(mini,2*(x-v[n-1]));
        cout<<mini<<"\n";
    }
}