#include<bits/stdc++.h>
using namespace std;




int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string b; cin >> b;
        int a[n+1];
        for(int i = 1;i <= n;i++){
            a[i] = b[i-1] - 'a';
        }
        int dp[n+1] = {};
        for(int i = 1;i <= n;i++){
            dp[i] = 1;
        }
        for(int i = 2;i <= n;i++){
            for(int j = 1;j < i;j++){
                if(a[j] <= a[i]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
        }
        cout << *max_element(dp, dp+n+1) << endl;

    }
}
