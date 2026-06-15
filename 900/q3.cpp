#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        // sum of first k 
        long long mini = 1LL*k*(k+1);
        mini = mini/2;
        long long maxi = 1LL*n*(n+1) - 1LL*(n-k)*(n-k+1);
        maxi/=2;
        if(x>=mini&&x<=maxi){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}