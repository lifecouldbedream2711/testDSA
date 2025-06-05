  #include<bits/stdc++.h>
using namespace std;
int a[11];
int n,m,ok=0;
void inra(){
	for(int i=1;i<=n;i++){
		cout<<a[i]<<' ';
	}cout<<endl;
}
void sinh(){
	int i=n-1;
	while(i>=1&&a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		ok=1;
	}else{
		int g=INT_MAX,v;
		for(int j=i+1;j<=n;j++){
			if(a[j]<g&&a[j]>a[i]){
				g=a[j];
				v=j;
			}
		}
		swap(a[v],a[i]);
		int s=i+1,e=n;
		while(s<e){
			swap(a[s],a[e]);
			s++;
			e--;
		}
	}
}
int main(){
	cin.tie(0) -> sync_with_stdio(0);
	cin>>n>>m;
	stack<int> s;
	a[1]=m;
	for(int i=1;i<=n;i++){
		if(i!=m)s.push(i);
	}
	for(int i=n;i>=2;i--){
		a[i]=s.top();
		s.pop();
	}
	while(a[1]==m&&!ok){
				inra();
		sinh();
	}
}
