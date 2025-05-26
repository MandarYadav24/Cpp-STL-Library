// STL in C++

// Pairs 
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void pairFunc () {
	pair<int, int> p = {3,4};
	
	cout<<p.first<< " "<<p.second<<endl;
	
	pair<int, pair<int,int>> q = {1,{2,3}};
	
	cout<<q.first<<" "<<q.second.second <<" "<<q.second.first<<endl;
	
	pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
	
	cout<<arr[1].second;
}

void pairFunction() {
	
	pair <int, int> i = {3,4};
	cout<<i.first<<endl;
	cout<<i.second<<endl;
	
	pair<int, pair<int,char>> j = {1,{2,'A'}};
	cout<<j.second.first<<endl;
	cout<<j.second.second<<endl;
	
	pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
	cout<<arr[1].first;
	
}

int main() {
  pairFunc();
	pairFunction();
    return 0;
}

