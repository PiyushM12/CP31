#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
       ll n ;
       cin>>n;
       // calculate the cost of making 00
       string s = to_string(n);
       int len = s.size();
       int cnt1 = 0;
       int temp =0;
       for(int i =len-1;i>=0;i--){
        if(temp==2) break;
        if(s[i]=='0'){
            temp++;
        }
        else cnt1++;
       }
       // 25
       int cnt2 =0;
       temp=0;
       for(int i =len-1;i>=0;i--){
        if(temp==2) break;
        if(s[i]=='5'&&temp==0){
            temp++;
        }
        else if(s[i]=='2'& temp == 1){
            temp++;
        }
        else cnt2++;
       }
       // 50
       int cnt3 =0;
       temp=0;
       for(int i =len-1;i>=0;i--){
        if(temp==2) break;
        if(s[i]=='5'&&temp==1){
            temp++;
        }
        else if(s[i]=='0'& temp == 0){
            temp++;
        }
        else cnt3++;
       }
       //75

       int cnt4 =0;
       temp=0;
       for(int i =len-1;i>=0;i--){
        if(temp==2) break;
        if(s[i]=='5'&&temp==0){
            temp++;
        }
        else if(s[i]=='7'& temp == 1){
            temp++;
        }
        else cnt4++;
       }
       vector<int>v = {cnt1,cnt2,cnt3,cnt4};
       int ans = *min_element(v.begin(),v.end());
       cout<<ans<<endl;


    }
}