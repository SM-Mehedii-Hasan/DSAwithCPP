#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s={1,2,3,4,3,4,5,5,5,6,4,3,2,1};
    for(auto x:s) cout<<x<<" ";
    cout<<endl;

    set<int, greater<int>> s_desc={1,2,3,4,3,4,5,5,5,6,4,3,2,1};
    for(auto x:s_desc) cout<<x<<" ";
    cout<<endl;

    set<pair<int,int>> sp={{1,10},{2,20},{3,30}};
    for(auto x:sp){
        cout << "(" << x.first << "," << x.second << ") ";
    }
    cout<<endl;

    cout<<"original set:"<<endl;
    for(auto x:s) cout<<x<<" ";
    cout<<endl;

    s.insert(7);
    s.emplace(8);
    cout<<"after insert in s:"<<endl;
    for(auto x:s) cout<<x<<" ";
    cout<<endl;

    s.erase(7);
    s.erase(s.begin());
    cout<<"after erase in s:"<<endl;
    for(auto x:s) cout<<x<<" ";
    cout<<endl;

    s.count(10)?cout<<"yes"<<endl:cout<<"no"<<endl;

    auto it1=s.upper_bound(4);
    if (it1 != s.end())
        cout << "upper_bound(4) = " << *it1<<endl;
    else
        cout << "upper_bound(4) not found"<<endl;

    auto it2=s.lower_bound(4);
    if (it2 != s.end())
        cout << "lower_bound(4) = " << *it2<<endl;
    else
        cout << "lower_bound() not found"<<endl;

    // Get smallest / largest element
    set<int>ss={10,4,3,6,34,53,65,80};
    for(auto x:ss) cout<<x<<" ";
    cout<<endl;
    cout<<"smallest= "<<*ss.begin()<<endl;
    cout<<"largest = "<<*ss.rbegin()<<endl;

    //  Remove duplicates from vector
    vector<int>v={1,2,1,5,4,1,6,3,2,2,7,5,2,4,8,9,8,0};
    cout<<"original vector with duplicate:"<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl;

    set<int>s2(v.begin(),v.end());  // renamed to s2
    v.assign(s2.begin(),s2.end());

    cout<<"original vector without duplicate:"<<endl;
    for(auto x:v) cout<<x<<" ";


    // a special iterator (back_insert_iterator) that, instead of overwriting elements, 
    // appends new elements to the container using push_back().
    vector<int>vvv;
    auto it=back_inserter(v);
    *it=10;
    *it=20;
    *it=30;
    cout<<"the vector using back_inserter:"<<endl;
    for(int x:v) cout<<x<<" ";
    cout<<endl;
// set_intersection, set_union, and set_difference.
set<int>A={1,2,3,4,5};
set<int>B={3,4,5,6,7};
vector<int>intersection_result;
vector<int>union_result;
vector<int>difference_result;
set_intersection(A.begin(),A.end(),
                B.begin(),B.end(),
                 back_inserter(intersection_result));
                 cout<<"Intersection:";
                 for(auto x:intersection_result) 
                 cout<<x<<" ";
                 cout<<endl;
set_union(A.begin(),A.end(),
                B.begin(),B.end(),
                 back_inserter(union_result));
                 cout<<"Union:";
                 for(auto x:union_result) 
                 cout<<x<<" ";
                 cout<<endl;  
set_difference(A.begin(),A.end(),
                B.begin(),B.end(),
                 back_inserter(difference_result));
                 cout<<"Difference:";
                 for(auto x:difference_result) 
                 cout<<x<<" ";
                 cout<<endl;                                 





}
