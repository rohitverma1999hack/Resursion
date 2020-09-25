#include<bits/stdc++.h>
using namespace std;


void insert(stack<int> &s,int temp){
	if(s.size() == 0 || s.top() <= temp){
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	insert(s,val);
}

void sort(stack<int> &s){
	if(s.size() == 0) return;
	int temp = s.top();
	s.pop();
	sort(s);
	insert(s,temp);
}

int main(){
	vector<int> v = {1,3,3,4,5,234,2,743,63};
	stack<int> s;
	for(int i=0;i<v.size();i++){
		s.push(v[i]);
	}
        sort(s);	
	while(s.size() != 0){
		cout<<s.top()<<" ";
		s.pop();
	}
	
}
