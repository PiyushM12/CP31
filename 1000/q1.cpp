#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int z=0;
        int n = s.size();
        int o=0;
        for(int i =0;i<n;i++){
            if(s[i]=='1')o++;
            else z++;
        }
        int ans =0;
        int i =0;
        while(i<n){
            if(s[i]=='1'){
                if(z==0){
                    ans= z+o;
                    break;
                }
                else {
                    z--;
                }
            }
            else{
                if(o==0){
                    ans = z+o;
                    break;
                }
                else{
                    o--;
                }
            }
            i++;
        }
        cout<<ans<<endl;
    }
}