#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void stackFunction() {
	stack <int> st;
	
	st.push(1);     // Stack: 1
	st.push(2);     // Stack: 1, 2
	st.push(3);     // Stack: 1, 2, 3
	st.push(4);     // Stack: 1, 2, 3, 4
	st.emplace(5);  // Stack: 1, 2, 3, 4, 5
	
	cout << st.top() << endl;  // Output: 5
	
	cout << st.size() << endl; // Output: 5
	st.pop();                  // Stack after pop: 1, 2, 3, 4
	
	cout << st.size() << endl; // Output: 4
	
	stack <int> st1, st2;
	st1.push(4);               // st1: 4, st2: empty
	
	st1.swap(st2);             // st1 becomes empty, st2: 4
	
	cout << st2.top() << endl; // Output: 4
}

int main() {
    stackFunction();
    return 0;
}

