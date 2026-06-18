#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n;
        char ch;
        cin>>n>>ch;
        string s;
        cin>>s;
        vector<int>init;
        vector<int>fin;
        for(int i =0;i<n;i++){
            if(s[i]==ch) init.push_back(i);
            if(s[i]=='g')fin.push_back(i);

        }
        fin.push_back(n+fin[0]);
        int maxi = INT_MIN;
        for(int i=0;i<init.size();i++){
            int num = init[i];
            auto it = lower_bound(fin.begin(),fin.end(),num);
            if(it!=fin.end()){
               
                maxi = max(maxi,*it-num);
            }
        }
        cout<<maxi<<endl;
    }
}