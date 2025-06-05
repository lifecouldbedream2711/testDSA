#include<bits/stdc++.h>
using namespace std;

int main(){
    int k; cin >> k;
    vector<int> a(k);
    for(int &x : a) cin >> x;
    for(int x : a) cout << x << " ";
}
