#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<int,string>mp;
    mp.insert({1,"apple"});
    mp.insert({2,"banana"});
      mp.insert({1,"orange"});
    mp.insert({2,"grapes"});
    mp.insert({2,"mango"});
    cout<<"original multimap:"<<endl;
    for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;
    cout<<"count key 2= "<<mp.count(2)<<endl;

    // mp.erase(2);
    // cout<<"after erase 2 from multimap:"<<endl;
    // for(auto it=mp.begin();it!=mp.end();it++)
    // cout<<it->first<<" "<<it->second<<endl;
    // auto it=mp.find(2);
    // mp.erase(it);
    // for(auto x:mp) cout<<x.first<<" "<<x.second<<endl;

    cout<<"range operations:"<<endl;
    auto range=mp.equal_range(2);
    for(auto it=range.first;it!=range.second;it++)
    cout<<it->first<<" "<<it->second<<endl;

    cout<<"range operations 2:"<<endl;

    auto it1 = mp.lower_bound(2);
auto it2 = mp.upper_bound(2);
for (auto it = it1; it != it2; ++it)
    cout << it->first << " " << it->second << endl;




}
