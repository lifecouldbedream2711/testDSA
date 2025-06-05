#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> tmp;
vector<bool> vs;

void try1(int i){
    for(int j = 1;j <= n;j++){
        if(!vs[j]){
            tmp[i] = j;
            vs[j] = true;
            if(i == n){
                if(tmp[1] == m){
                    for(int k = 1;k <= n;k++) cout << tmp[k] << " ";
                    cout << endl;
                }
            }else{
                try1(i+1);
            }
            vs[j] = false;
        }
    }
}


int main(){
    cin >> n >> m;
    tmp.resize(n+1);
    vs.assign(n+1, false);
    try1(1);
}
