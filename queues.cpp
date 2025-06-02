#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void queueFunction() {
    queue <int> q;
    
    q.push(1);
    q.push(11);
    q.emplace(13);
    
    cout<<q.back()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    
    q.back() += 8;
    
    cout<<q.back()<<endl;
}

int main() {
    queueFunction();
    return 0;
}

