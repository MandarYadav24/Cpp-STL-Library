#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void multiSetFunction() {
    multiset <int> ms;
    
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(7);
    ms.emplace(8);
    
    int cnt = ms.count(1);
    cout<<cnt<<endl;
    
    ms.erase(1);
    cnt = ms.count(1);
    cout<<cnt<<endl;
    
    ms.insert(1);
    ms.insert(1);
    
    ms.erase(ms.find(1));
    cnt = ms.count(1);
    cout<<cnt<<endl;
    
    ms.insert(1);
    ms.insert(1);
    cout<<"No of 1s is"<<endl;
    cnt = ms.count(1);
    cout<<cnt<<endl;
    
    auto it1 = ms.find(1);
    auto it2 = it1;
    advance(it2, 2); // Move iterator two steps forward
    ms.erase(it1, it2); // Erase two occurrences

    cout << "After erase" << endl;
    cnt = ms.count(1);
    cout << cnt << endl; // Output: 1
}

int main() {
    multiSetFunction();
    return 0;
}

