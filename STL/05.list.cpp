// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<int>l;
//     l={1,2,3,4,4,5,4};
//     cout<<"original list:"<<endl;
//     for(auto x:l) cout<<x<<" ";
//     cout<<endl<<endl;
//     l.push_back(10);
//     l.push_front(10);
//     l.insert(next(l.begin()),20);
//     cout<<"list after push and insert:"<<endl;
//     for(auto x:l) cout<<x<<" ";
//     cout<<endl<<endl;
//     l.pop_back();
//     l.pop_front();
//     l.erase(next(l.begin()));
  
//      cout<<"list after pop:"<<endl;
//     for(auto x:l) cout<<x<<" ";
//     cout<<endl<<endl;
//     //   l.remove(4);
//     //    cout<<"list after remove:"<<endl;
//     // for(auto x:l) cout<<x<<" ";
//     // cout<<endl<<endl;
//     l.unique();
//        cout<<"list after unique:"<<endl;
//     for(auto x:l) cout<<x<<" ";
//     cout<<endl<<endl;

                    

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l={4,3,7,1,5,7,5,3,8,5,9,6,2};
    cout<<"before sort:"<<endl;
    for(auto x:l) cout<<x<<" ";
    cout<<endl;
    l.sort();
     cout<<"after sort:"<<endl;
    for(auto x:l) cout<<x<<" ";
    cout<<endl;
    l.reverse();
      cout<<"after reverse:"<<endl;
    for(auto x:l) cout<<x<<" ";
    cout<<endl;
  

}
