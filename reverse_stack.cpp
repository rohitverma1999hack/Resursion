#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int temp){
	if(s.size() == 0) {
		s.push(temp);
		return;
	}
	int top = s.top();
	s.pop();
	insert(s,temp);
	s.push(top);
}

void solve(stack<int> &s){
	if(s.size() == 1) return;
	int temp = s.top();
	s.pop();
	solve(s);
	insert(s,temp);
}

int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
        s.push(4);
	s.push(5);
        s.push(6);
	solve(s);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}
