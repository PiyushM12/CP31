#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0);
        int maxi =0;
        int temp =0;
        for(int i=0;i<n;i++){

            cin>>a[i];
        }
        int  i=0,j=0;
        while(j<n){
                if(a[j]==0){
                    j++;
                }
                else{
                    maxi= max(maxi,j-i);
                    while(a[j]==1&&j<n){
                        j++;

                    }
                    i=j;
                }
        }
        maxi = max(maxi,j-i);
        cout<<maxi<<endl;
    }
}