#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void priorityQueueFunction() {
    priority_queue <int> pq;
    
    pq.push(1);
    pq.push(15);
    pq.push(11);
    pq.emplace(13);
    
    
    cout<<pq.top()<<endl; // 15
    
    int top = pq.top();
    cout<<top<<endl; // 15
    pq.pop();
    
    top += 8;
    
    pq.push(top);
    
    cout<<pq.top()<<endl;
    
    // minimum heap
    
    priority_queue<int, vector<int>, greater<int>> pqS;
    
    pqS.push(1);
    pqS.push(15);
    pqS.push(11);
    pqS.emplace(13);
  
    cout<<"Mininum Heap"<<endl;
    cout<<pqS.top()<<endl;
    
}

int main() {
    priorityQueueFunction();
    return 0;
}

