#include<bits/stdc++.h>
using namespace std;
int n,m;
int parent[100005],num[100005];
void init(){
	for(int i=1;i<=n;i++){
		parent[i]=i;
		num[i]=1;
	}
}
int find(int u){
	if(parent[u]!=u) return find(parent[u]);
	return parent[u];
}
void Union(int u,int v){
	int a=find(u),b=find(v);
	if(a==b) return;
	if(a>b) swap(a,b);
	num[a]+=num[b];
	parent[b]=a;
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	cin>>n>>m;
	init();
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		Union(x,y);
	}
	int res=0;
	for(int i=2;i<=n;i++){
		if(find(i)!=1){
			res=max(res,num[i]);
		}
	}
	cout<<num[1]+res;
}
