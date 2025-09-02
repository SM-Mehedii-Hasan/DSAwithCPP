#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string> um;

    // Insert elements
    um[1] = "one";
    um.insert({2,"two"});
    um.insert(make_pair(3,"three"));

    cout<<"The original unordered_map:"<<endl;
    for(auto x:um) cout<<x.first<<" "<<x.second<<endl;

    // Erase by key
    um.erase(2);
    cout<<"The unordered_map after erase at key 2:"<<endl;
    for(auto x:um) cout<<x.first<<" "<<x.second<<endl;

    // Insert again
    um[2] = "two";
    um[4] = "four";

    cout<<"The unordered_map:"<<endl;
    for(auto x:um) cout<<x.first<<" "<<x.second<<endl;

    // Size
    cout<<"size = "<<um.size()<<endl;

    // Frequency counting
    cout<<"Count frequency of elements:"<<endl;
    vector<int> arr = {1,2,2,3,2,2,1,5,3};
    unordered_map<int,int> fmap;

    cout<<"Vector:"<<endl;
    for(int x:arr) cout<<x<<" ";
    cout<<endl;

    for(int x:arr) fmap[x]++;

    cout<<"unordered_map (frequency):"<<endl;
    for(auto x:fmap) cout<<x.first<<" "<<x.second<<endl;
    cout<<"Number of buckets = "<<um.bucket_count()<<endl;

for(int i=0;i<um.bucket_count();i++){
    cout<<"Bucket "<<i<<" has "<<um.bucket_size(i)<<" elements."<<endl;
}
cout<<"Load factor = "<<um.load_factor()<<endl;
}
