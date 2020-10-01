#include<bits/stdc++.h>
using namespace std;

//passing stack by reference
//k is the middle one 
void del(stack<int> &s,int k){
	if(k==1){
		s.pop();
		return;
	}
	int temp = s.top();
	s.pop();
	del(s,k-1);
	s.push(temp);
	return;
}

int main(){
	stack<int> s;
	s.push(10);
        s.push(30);
        s.push(20);
        s.push(5);
        s.push(2);
	s.push(1);
	int k = (s.size()/2) + 1;
	del(s,k);
	while(s.size()!=0){
		cout<<s.top()<<" ";
		s.pop();
	}
}
