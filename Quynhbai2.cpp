  #include<bits/stdc++.h>
using namespace std;


int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		char s[n];
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int d[5005];
		for(int i=0;i<n;i++){
			d[i]=1;
		}
		int maxx=0;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(s[j]<=s[i]&&d[j]+1>d[i]){
					d[i]=d[j]+1;
				}
				maxx=max(d[i],maxx);
			}
		}
		cout<<maxx<<"\n";
	}
}
