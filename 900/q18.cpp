#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(2*b<a+c){
        int sum = a+c;
        if(sum%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            sum/=2;
            if(sum%b==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    else{
       int sum = b*2;
       if((sum-a)%c==0||(sum-c)%a==0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }

    }
}