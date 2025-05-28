#include <bits/stdc++.h>
#include <iostream>
#include <list>

using namespace std;

void listFunction() {
    list<int> ls;

    // Adding elements
    ls.push_back(2);        // List: 2
    ls.emplace_back(5);     // List: 2, 5
    ls.push_front(6);       // List: 6, 2, 5
    ls.emplace_front(1);    // List: 1, 6, 2, 5
    ls.emplace_front(0);    // List: 0, 1, 6, 2, 5

    cout << "Initial list: ";
    for (int x : ls) {
        cout << x << " ";
    }
    cout << endl;

    // Insert 99 at the third position (0-based index)
    auto it = ls.begin();
    advance(it, 2); // Move iterator to the 3rd position
    ls.insert(it, 99); // List: 0, 1, 99, 6, 2, 5

    cout << "After inserting 99 at index 2: ";
    for (int x : ls) {
        cout << x << " ";
    }
    cout << endl;

    // Remove all occurrences of 2
    ls.remove(2); // List: 0, 1, 99, 6, 5

    cout << "After removing 2: ";
    for (int x : ls) {
        cout << x << " ";
    }
    cout << endl;

    // Reverse the list
    ls.reverse(); // List: 5, 6, 99, 1, 0

    cout << "After reversing: ";
    for (int x : ls) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    listFunction();
    return 0;
}
