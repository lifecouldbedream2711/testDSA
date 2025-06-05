#include<bits/stdc++.h>
using namespace std;

long long xuly(vector<string> s){
	stack<long long> st;
	for(int i=s.size()-1;i>=0;i--){
		if(s[i]!="*"&&s[i]!="-"&&s[i]!="+"&&s[i]!="/"){
			st.push(stoll(s[i]));
		}else{
			long long a=st.top(); st.pop();
			long long b=st.top();st.pop();
			if(s[i]=="+") st.push(a+b);
			if(s[i]=="-") st.push(a-b);
			if(s[i]=="*") st.push(a*b);
			if(s[i]=="/") st.push(a/b);
		}
	}
	return st.top();
}

int main(){
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
	cout<<xuly(s)<<endl;
	}
}
