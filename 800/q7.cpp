#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int cnt =0;
        while(s.size()>x.size()){
            x.append(x);
            cnt++;
        }
        if(x.find(s) != string::npos){
            cout<<cnt<<endl;
            continue;
        }
        else {
            x.append(x);
            cnt++;
            if(x.find(s) != string::npos){
                cout<<cnt<<endl;
                continue;
            }
            else {
                cout<<-1<<endl;
                continue;
            }
        }
    }
}