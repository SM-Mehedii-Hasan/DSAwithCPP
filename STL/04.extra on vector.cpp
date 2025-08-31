//__________________reserve() and resize()_________________________
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v;
//     cout<<"before reserve size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//     v.reserve(5);
//      cout<<"after reserve size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//     v.push_back(10);
//     v.push_back(20);
//     cout<<"after push_back two value size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//     cout<<"content:";
//     for(auto x:v) cout<<x<<" ";
//     cout<<endl<<endl;

//     v.resize(5);
//      cout<<"after resize size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//      cout<<"after push_back two value size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//       cout<<"content:";
//     for(auto x:v) cout<<x<<" ";
//     cout<<endl<<endl;

//       v.resize(2);
//      cout<<"after resize size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//      cout<<"after push_back two value size and capacity:"<<endl;
//     cout<<"size = "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
//       cout<<"content:";
//     for(auto x:v) cout<<x<<" ";
//     cout<<endl<<endl;


// }


//___________________
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<"size= "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
    for(size_t i=1;i<=10;i++) v.push_back(i);
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
     cout<<"size= "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
    //  v.resize(5);
    //     for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    //  cout<<"size= "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
    //  v.reserve(10);
    //      for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    //  cout<<"size= "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;
    v.shrink_to_fit();
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
     cout<<"size= "<<v.size()<<" "<<"capacity = "<<v.capacity()<<endl;




}
