#include<bits/stdc++.h>
using namespace std ;
int main(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(2);
    ms.insert(2);
    cout<<"original multiset:"<<endl;
    for(auto x:ms) cout<<x<<" ";
    cout<<endl;
    cout<<"count 2 = "<<ms.count(2)<<endl;
    auto it=ms.find(5);
    if(it!=ms.end()) cout<<"found= "<<*it<<endl;
    else cout<<"not found"<<endl;
    // ms.erase(2);
    // cout<<"after erase 2:"<<endl;
    // for(auto it:ms) cout<<it<<" ";
    // cout<<endl;
   auto uit = ms.upper_bound(2); // First element **greater than 2**
    auto lit = ms.lower_bound(2); // First element **not less than 2** (≥2)

    cout << "upper bound of 2= " << *uit << endl;
    cout << "lower bound of 2= " << *lit << endl;
}
