#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sieve(vector<bool>& pr, vector<int>& primes){
    int t = pr.size();

    pr[0] = pr[1] = false;

    for(int i = 2; i < t; i++){
        pr[i] = true;
    }

    for(int i = 2; i * i < t; i++){
        if(pr[i]){
            for(int j = i * i; j < t; j += i){
                pr[j] = false;
            }
        }
    }

    for(int i = 2; i < t; i++){
        if(pr[i]){
            primes.push_back(i);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
   vector<int>primes;
    cin.tie(nullptr);
     vector<bool>pr(400000,0);
    int t;
    cin>>t;
    sieve(pr,primes);
    while(t--){
    int n;
    cin>>n;
   
    for(int i =0;i<n;i++){
        cout<<1ll*primes[i]*primes[i+1]<<" ";
    }
    
    cout<<endl;
    }
}