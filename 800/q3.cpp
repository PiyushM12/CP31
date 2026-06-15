#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n;
        cin>>n;
        string v;
        v.resize(n);
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        bool con = false;
        for(int i =0;i<n-2;i++){
            if(v[i]=='.'&&v[i+1]=='.'&&v[i+2]=='.'){
             con= true;
               
            }
        }
        
        if(v[0]=='.'){
            v[0]='0';
            ans++;

        }
        for(int i =1;i<n;i++){
            if(v[i]=='#'|| v[i]=='0') continue;
            else{
                if(v[i-1]== '0'&&i-2>=0&&v[i-2]=='0'){
                    v[i]='0';
                 }
                 else  if(v[i-1]=='0'&& i+1 <n&&v[i+1]=='.'){
                    v[i]='0';
                    v[i+1]= '0';
                    ans++;
                }
                else{
                    v[i]='0';
                    ans++;
                }
                
            }
        }
        if  (con) cout<<2<<endl;
      else  cout<<ans<<endl;
    }
}