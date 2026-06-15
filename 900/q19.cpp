#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(y%4==0){
            cout<<x<<endl;
            continue;
        }
        else{
            int d = y%4;
            if(x%2==0){
                if(d==1){
                    cout<<x-y<<endl;
                    continue;
                }
                if(d==2){
                    cout<<x+1<<endl;
                    continue;
                }
                if(d==3){
                    cout<<x+1+y<<endl;
                    continue;
                }
            }
            else{
                if(d==1){
                    cout<<x+y<<endl;
                    continue;
                }
                if(d==2){
                    cout<<x-1<<endl;
                    continue;
                }
                if(d==3){
                    cout<<x-1-y<<endl;
                    continue;
                }
            }
        }
        
    }
}