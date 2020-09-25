#include<bits/stdc++.h>
using namespace std;

void solve(int k,int idx,int &ans,vector<int> &v){
	if(v.size() == 0){
		ans = v[0];
		return;
	}
	idx = (idx + k) % v.size();
	v.erase(v.begin() + idx);
	solve(k,idx,ans,v);
}

int main(){
	int n = 10;
	int k = 7;
	int idx = 0;
	int ans = -1;
	vector<int> v;
	for(int i=1;i<=40;i++) v.push_back(i);
        solve(k-1,idx,ans,v);
	cout<<ans<<endl;
}
