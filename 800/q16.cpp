#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        int mini = INT_MAX;
        for(int i =1;i<n;i++){
            int x= v[i]-v[i-1];
            mini = min(x,mini);
        }
        if(mini<0){
            cout<<0<<endl;
        }
        else {
            cout<<mini/2 +1<<endl;
        }
    }
}