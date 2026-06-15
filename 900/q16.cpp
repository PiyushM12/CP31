#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--){
        string s,t;
        cin >> s >> t;

        vector<int> need(26,0);

        for(char c : t)
            need[c-'A']++;

        int j = t.size() - 1;

        for(int i = s.size()-1; i >= 0; i--){
            
            if(j >= 0 && s[i] == t[j]){
                need[s[i]-'A']--;
                j--;
            }
            else{
                // if this character is still needed later
                if(need[s[i]-'A'] > 0){
                    j = -2; // mark impossible
                    break;
                }
            }
        }

        if(j < 0 && j != -2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
