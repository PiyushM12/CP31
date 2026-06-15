#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       vector<int>f(26,0);
       int temp =n;
       while(temp--){
        char ch;
        cin>>ch;
        f[ch-'a']++;
       } 
       if(n<k){
        cout<<"NO"<<endl;
        continue;
       }
       if(n==k){
        cout<<"YES"<<endl;
        continue;
       }
       int odd=0;
       for(int i =0;i<26;i++){
        if(f[i]%2==1)odd++;
       }

       if(odd-1<=k){
        odd-=1;
        k-=odd;
       }
       else{
        cout<<"nO"<<endl;
        continue;
       }
       if(k>=0)cout<<"yes"<<endl;
       else cout<<"no"<<endl;




     
    }
}