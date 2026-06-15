#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>v(n,'0');
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        int k =n;
        int i =0,j= n-1;
        while(i<j){
            if(v[i]!=v[j]){
                i++;
                j--;
                k-=2;
            }
            else break;
        }
        cout<<k<<endl;
    }
}