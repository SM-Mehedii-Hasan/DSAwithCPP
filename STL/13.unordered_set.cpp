#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>us;
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.insert(4);
    us.insert(5);
    us.insert(6);
    cout<<"the original us:"<<endl;
    for(auto x:us) cout<<x<<" ";
    cout<<endl;
    cout<<"size= "<<us.size()<<endl;
    cout<<"is empty? = "<<us.empty()<<endl;
    if(us.find(30)!=us.end()) cout<<"found\n";
    else cout<<"not found\n";
    us.erase(4);
      cout<<"the original us after remove 4:"<<endl;
    for(auto x:us) cout<<x<<" ";
    cout<<endl;
    cout<<"Number of buckets:";
    cout << us.bucket_count() << endl;
    cout<<"Max possible buckets:";
    cout << us.max_bucket_count() << endl;
    cout<<"Elements in bucket 0 = "; 
    cout << us.bucket_size(0) << endl;  
    cout<<"Elements per bucket (average):";
    cout << us.load_factor() << endl;

    cout<<endl<<endl;
    cout<<"number of buckets:"<<us.bucket_count()<<endl;
    for(int i=0;i<us.bucket_count();i++){
        cout<<"bucket["<<i<<"] ="<<us.bucket_size(i)<<"elements"<<endl;
    }



}
