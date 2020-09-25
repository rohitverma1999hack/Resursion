#include<bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int temp){
	if(v.size() == 0 || v[v.size() - 1] <= temp){
	       	v.push_back(temp);
		return;
	}
	int var = v[v.size() - 1];
	v.pop_back();
	insert(v,var);
}

void sort(vector<int> &v){
	if(v.size() == 0) return;
	int temp = v[v.size() - 1];
	v.pop_back();
	sort(v);
	insert(v,temp);
}

int main(){
	vector<int> v = {1,2,6,4,8};
	int n = 5;
	sort(v);
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}
