#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b;
        vector<int>c;
        int mini = INT_MAX;
        for(int i =0;i<n;i++){
            cin>>a[i];
            mini = min(mini,a[i]);
        }
        for(int i =0;i<n;i++){
            if(a[i]==mini){
                b.push_back(a[i]);
            }
            else c.push_back(a[i]);
        }
        if(b.size()==0||c.size()==0){
            cout<<-1<< endl;
        }
        else {
            int lb= b.size();
            int lc = c.size();
            cout<<lb<<" "<<lc<<endl;
            for(int i =0;i<lb;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i =0;i<lc;i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
}