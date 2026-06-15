#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        int x;
        cin>>n>>x;
        vector<long long>v(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        long long maxi=0;
        for(int i =0;i<n;i++){
            maxi+=(v[i]-1+x)/x;
        }
        long long mini = 0;
        for(int i =0;i<n;i++){
            mini+=v[i];
        }
        mini+=(x-1);
        mini=mini/x;
        cout<<mini<<" "<<maxi<<endl;

    }
}