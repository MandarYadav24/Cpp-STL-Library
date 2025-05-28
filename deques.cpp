#include <bits/stdc++.h>
#include <iostream>
#include <deque>

using namespace std;

void dequeFucntion() {
	deque <int> dq;
	
	dq.push_back(3);
	dq.emplace_back(4);
	
	for(auto dt: dq) {
		cout<<dt << " ";
	}
	cout<<endl;
	
	dq.push_front(2);
	dq.emplace_front(1);
	
	for(auto dt: dq) {
		cout<<dt << " ";
	}
	cout<<endl;
	
	dq.pop_back();
	dq.pop_front();
	
	for(auto dt: dq) {
		cout<<dt << " ";
	}
	cout<<endl;
	
	dq.back();
	dq.front();
	
	for(auto dt: dq) {
		cout<<dt << " ";
	}
	cout<<endl;
	
}

int main() {
    dequeFucntion();
    return 0;
}
