#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
         ll n;
        cin>>n;
        ll mini =n/6;
        if(n%6==2||n%6==4){
            mini++;
        }
        ll maxi = n/4;
        if(n<=3){
            cout<<-1<<endl;
        }
       else if(n%4==2||n%6==2||n%4==0||n%6==0||n%6==4){
            cout<<mini<<" "<<maxi<<endl;
            
        }
        else{
            cout<<-1<<endl;
        }
        
    }
}