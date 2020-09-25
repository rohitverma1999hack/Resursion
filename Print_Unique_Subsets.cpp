#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op,map<string,int> &m){
	if(ip.size() == 0){
		m[op]++;
		return;
	}
	
	string op1 = op;
	string op2 = op;

	op1.push_back(ip[0]);
	ip.erase(ip.begin()+0);

	solve(ip,op1,m);
	solve(ip,op2,m);
}

int main(){
	string ip = "aad";
	string op = "";
	map<string,int> m;
	solve(ip,op,m);	
	for(auto it : m){
		cout<<it.first<<endl;
	}
}
