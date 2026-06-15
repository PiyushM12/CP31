#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >>n;
        vector<int>v(n);
        bool zero = true;
        int xorval =0;
        for(int i =0;i<n;i++){
            cin>>v[i];
            if(v[i]!=0){
                zero = false;
            }
            xorval = xorval^v[i];
        }
        if(zero){
            cout<<0<<endl;
        }
        else if(xorval ==0){
                cout<<1<<endl;
                cout<<1<<" "<<n<<endl;
        }
        else{
            if(n%2==0){
                    cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
            }
            else{
                cout<<4<<endl;
                cout<<1<<" "<<2<<endl;
            cout<<1<<" "<<2<<endl;
            cout<<2<<" "<<n<<endl;
            cout<<2<<" "<<n<<endl;
            }
            
        }
    }
}