#include <bits/stdc++.h>
using namespace std;
int main(){
    unordered_multiset<int>ums;
    ums.insert(1);
    ums.insert(2);
    ums.insert(3);
    ums.insert(4);
    ums.insert(1);
    ums.insert(2);
    ums.insert(3);
    ums.insert(2);
     cout << "Original unordered_multiset:" << endl;
     for(auto x:ums)cout<<x<<" ";
     cout<<endl;
    cout << "Count of 2 = " << ums.count(2) << endl;
    cout<<"total buckets= "<<ums.bucket_count()<<endl;
  for(size_t i=0;i<ums.bucket_count();i++)
  cout<<"bucket["<<i<<"] = "<<ums.bucket_size(i)<<endl;
  

}
