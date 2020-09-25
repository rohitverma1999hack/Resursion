/*
 * Given a String we need to find that total permuation in case 
 * Sample Input => "ABC" Output => "A_BC" , " AB_C" , "A_B_C" , "ABC"
 * */

#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){
	//if in the recursive tree the leaf node is where the ip becomes zero
	if(ip.size() == 0){
		cout<<op<<endl;
		return;
	}
	//since we have 2 choices so designing the outputs aps
	string op1 = op;
	string op2 = op;

	op1.push_back('_');
	op1.push_back(ip[0]);
	op2.push_back(ip[0]);
	ip.erase(ip.begin() + 0);
	solve(ip,op1);
	solve(ip,op2);
}

int main(){
	string ip = "ABC";
	string op = "";
	op.push_back(ip[0]);
	ip.erase(ip.begin() + 0);
	solve(ip,op);
}

