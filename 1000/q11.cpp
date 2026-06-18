#include<bits/stdc++.h>
using namespace std;
int main(){
 cin.tie(nullptr);
 ios::sync_with_stdio(false);
 int n,d;
 cin>>n>>d;
 d++;
 vector<int>p(n);
 for(int i =0;i<n;i++){
    cin>>p[i];
 }
 sort(p.begin(),p.end());
 int m = n;
 int i=n-1;
 int ans =0;
 while(m>0&&i>=0){
        int temp = p[i];
        int len = d + (temp-1);
        len = len/temp;
        if(len<=m){
            ans++;
            m-=len;
            i--;
        }
        else break;
 }
 cout<<ans<<endl;
}