#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            a+=c/2;
            b+= c/2;
        }
        else {
            a = a +1+  c/2 ;
            b = b+ c/2;
        }
        if(a-b>=1){
            cout<<"First"<<endl;
        }
        else cout<<"Second"<<endl;

    }
}