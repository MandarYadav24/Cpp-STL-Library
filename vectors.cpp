// vectors in STL

#include <bits/stdc++.h>

using namespace std;

void vectorFunction() {
	vector <int> v;
	
	v.push_back(1); // add 1 in the v
	v.emplace_back(2); // adding the 2 after 1 in v
	
	for (int x : v) {
		cout<< x << " ";
	}
	cout<<endl;
	
	vector<pair<int,int>> vecPair;
	
	vecPair.push_back({1,3});
	vecPair.emplace_back(1,2);
	
	for (auto p : vecPair) {
		cout<< "(" << p.first << "," <<p.second<< ")";
	}
	cout<<endl;
}

int main() {
    vectorFunction();
    return 0;
}
