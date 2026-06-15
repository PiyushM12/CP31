#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d-b<c-a||d<b){
            cout<<-1<<endl;
        }
        else{
            int ans = a+d+d-b-c-b;
            cout<< ans<<endl;
        }
    }
}