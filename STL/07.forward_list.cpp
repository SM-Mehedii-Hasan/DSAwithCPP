#include<bits/stdc++.h>
using namespace std;
int main(){
    forward_list<int>fl={3,4,5,30,30};
    cout<<"original forward list:"<<endl;
    for(auto x:fl) cout<<x<<" ";
    cout<<endl;
    fl.push_front(2);
    fl.push_front(1);
   fl.insert_after(fl.begin(), 15); 
   fl.insert_after(fl.before_begin(),10);
    cout<<"after push:"<<endl;
    for(auto x:fl) cout<<x<<" ";
    cout<<endl;
    fl.pop_front();
    cout<<"after pop:"<<endl;
    for(auto x:fl) cout<<x<<" ";
    cout<<endl;
    fl.erase_after(fl.begin());
     cout<<"after erase:"<<endl;
    for(auto x:fl) cout<<x<<" ";
    cout<<endl;
    fl.remove(30);
     cout<<"after remove:"<<endl;
    for(auto x:fl) cout<<x<<" ";
    cout<<endl;
    fl.remove_if([](int x){ return x <=3; });
     cout<<"after remove if:"<<endl;
    for(auto x:fl) cout<<x<<" ";
    cout<<endl;
    fl.clear();
    fl.empty()?cout<<"yes":cout<<"no";
    cout<<endl;
    fl.assign({1,2,3,4,5});
        fl.empty()?cout<<"yes":cout<<"no";
        cout<<endl;
        cout<<"front element: "<<fl.front()<<endl;
        fl.reverse();
        cout<<"reverse the list:"<<endl;
        for(auto x:fl) cout<<x<<" ";
        cout<<endl;
        fl.sort();
        cout<<"sorting ascending :"<<endl;
        for(auto x:fl) cout<<x<<" ";
        cout<<endl;

        forward_list<int>fl1={10,20,20,30,20,40,40,50,40};
        fl1.unique();
        cout<<"Remove consecutive duplicates from fl1:"<<endl;
        for(auto x:fl1) cout<<x<<" ";
        cout<<endl;
        fl.merge(fl1);
        cout<<"merge fl and fl1:"<<endl;
        for(auto x:fl) cout<<x<<" ";
        cout<<endl;




}
