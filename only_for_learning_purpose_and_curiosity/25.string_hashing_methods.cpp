// 🔹 METHOD 1: Using unordered_map (Hash Map)
// ⏱️ Time Complexity: O(n + q) average, O(n*q) worst-case (rare)
// 💾 Space Complexity: O(unique characters)

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string s;cin>>s;
    unordered_map<char,int>hash;
    for(int i=0;i<s.size();i++) hash[s[i]]++;
    int q;cin>>q;
    while(q--){
        char c;cin>>c;
        cout<<hash[c]<<endl;
    }
}
// 🔹 METHOD 2: Using map (Ordered Map - Red-Black Tree)
// ⏱️ Time Complexity: O(n log n + q log n)
// 💾 Space Complexity: O(unique characters)

#include<iostream>
#include<map>
using namespace std;
int main(){
    string s;cin>>s;
    map<char,int>hash;
    for(int i=0;i<s.size();i++) hash[s[i]]++;
    int q;cin>>q;
    while(q--){
        char c;cin>>c;
        cout<<hash[c]<<endl;
    }
}
// 🔹 METHOD 3: Using array of size 256 (for all ASCII characters)
// ⏱️ Time Complexity: O(n + q)
// 💾 Space Complexity: O(256) → constant space

#include<iostream>
using namespace std;
int main(){
    string s;cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;cin>>q;
    while(q--){
        char c;cin>>c;
        cout<<hash[c]<<endl;
    }
}
// 🔹 METHOD 4: Using array of size 26 (only lowercase letters 'a'–'z')
// ⏱️ Time Complexity: O(n + q)
// 💾 Space Complexity: O(26) → constant, most efficient for lowercase English letters

#include<iostream>
using namespace std;
int main(){
    string s;cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;cin>>q;
    while(q--){
        char c;cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}
