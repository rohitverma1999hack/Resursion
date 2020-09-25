#include<bits/stdc++.h>
using namespace std;

void rev(stack<int> &s){
	if(s.size() == 0) return;
	int top = s.top();
	s.pop();
	rev(s);
	cout<<top<<endl;
	s.push(top);
}

int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	rev(s);
	while(s.size() != 0){
		cout<<s.top()<<" ";
		s.pop();
	}
}
