#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50};
    cout<<"the original vector:"<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
    auto it1=v.begin();
    v.insert(it1,5);
    cout<<"after insert at begin"<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
    auto it2=v.begin()+4;
    v.insert(it2,60);
    cout<<"after insert at 5th position:"<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl<<endl;


    vector<int> v1={1,2,3,4,5};
    cout<<"the original vector v2:"<<endl;
    for(auto x:v1) cout<<x<<" ";
    cout<<endl;
    auto it3=v1.begin();
    v1.erase(it3);
    cout<<"after erase the first element:"<<endl;
    for(auto x:v1) cout<<x<<" ";
    cout<<endl;
      auto it4=v1.begin()+2;
    v1.erase(it4);
    cout<<"after erase the first+2th element:"<<endl;
    for(auto x:v1) cout<<x<<" ";
    cout<<endl<<endl;







    vector<int> v2={1,2,3,4,5,6,7};
    cout<<"the v2 is:"<<endl;
    for(auto x:v2) cout<<x<<" ";
    cout<<endl;
    v2.clear();
    cout<<"after clear v2:"<<endl;
    cout<<"is v2 empty?"<<(v2.empty()?"yes":"no")<<endl;

}
