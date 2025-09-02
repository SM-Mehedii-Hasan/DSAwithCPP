#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="one";
    m.insert({2,"two"});
    m.insert(make_pair(3,"three"));
    cout<<"the original map:"<<endl;
    for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
    m.erase(2);
     cout<<"the original map after erase at key 2:"<<endl;
    for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
    m[2]="two";
    m[4]="four";
    cout<<"the original map:"<<endl;
    for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
    cout<<"size= "<<m.size()<<endl;

    cout<<"count frequency of elements:"<<endl;
    vector<int> arr = {1,2,2,3,2,2,1,5,3};
    map<int,int>fmap;
    cout<<"vector:"<<endl;
    for(int x:arr) cout<<x<<" ";
    cout<<endl;
    for(int x:arr) fmap[x]++;
    cout<<"map"<<endl;
    for(auto x:fmap) cout<<x.first<<" "<<x.second<<endl;
    




}
