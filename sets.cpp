#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

void setFunction() {
    set <int> st;
    
    st.insert(1);
    st.insert(4);
    st.insert(4); // does not take into cosideration
    st.insert(8);
    st.emplace(3);
    
    auto it = st.find(8);
    cout<<*it<<endl;
    
    int cnt = st.count(4);
    cout<<cnt<<endl;
    
    st.erase(4);
    cnt = st.count(4);
    cout<<cnt<<endl;
    
    auto it1 = st.find(8);
    st.erase(it1);
    
    cnt = st.count(8);
    cout<<cnt<<endl;
    
    st.insert(1);
    st.insert(4);
    st.insert(8);
    st.emplace(3);
    
    auto i1 = st.find(3);
    auto i2 = st.find(8);
    
    st.erase(i1, i2);
    cnt = st.count(4);
    cout<<cnt<<endl;
}

int main() {
    setFunction();
    return 0;
}

