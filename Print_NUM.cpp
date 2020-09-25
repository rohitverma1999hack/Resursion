#include<bits/stdc++.h>
using namespace std;

void print(int n){
	if(n == 1){
		cout<<n<<endl;
		return;
	}
	cout<<n<<" ";
	print(n-1);
}

void print_rev(int n){
	if(n == 1){
		cout<<n;
		return;
	}
	print_rev(n-1);
	cout<<n<<" ";
}

int main(){
	print(50);
	print_rev(50);
}
