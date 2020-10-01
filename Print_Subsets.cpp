/*
 *Print All the subset of the given subset
 * */

#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){
	if(ip.size() == 0){
		cout<<op<<endl;
		return;
	}

	string op1 = op;
	string op2 = op;

	op2.push_back(ip[0]);
	ip.erase(ip.begin() + 0);
	//two options wheather to choose the element in the subset or not 
	solve(ip,op1);
	solve(ip,op2);
}

int main(){
	string ip="aab";
	string op = "";
	solve(ip,op);
}
