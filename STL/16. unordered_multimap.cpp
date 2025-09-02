#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_multimap<int, string> ump;

    ump.insert({1, "apple"});
    ump.insert({2, "banana"});
    ump.insert({1, "orange"});
    ump.insert({2, "grapes"});
    ump.insert({2, "mango"});

    cout << "Original unordered_multimap:" << endl;
    for (auto x : ump)
        cout << x.first << " " << x.second << endl;

    cout << "Count key 2 = " << ump.count(2) << endl;


    /*
    ump.erase(2);
    cout << "After erase 2 from unordered_multimap:" << endl;
    for (auto it = ump.begin(); it != ump.end(); it++)
        cout << it->first << " " << it->second << endl;
    */

    // Range operations
    cout << "Range operations:" << endl;
    auto range = ump.equal_range(2);
    for (auto it = range.first; it != range.second; it++)
        cout << it->first << " " << it->second << endl;

 
}
