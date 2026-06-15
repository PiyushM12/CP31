#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        long long cnt =0;
        bool no = false;
        for(int i =n-2;i>=0;i--){
            if(v[i+1]==0){
                no = true;
                break;
            }
            while(v[i]>=v[i+1]){
                cnt++;
                v[i]/=2;
            }
        }
        no?cout<<-1<<endl:cout<<cnt<<endl;
    }
}