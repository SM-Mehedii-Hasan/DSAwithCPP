#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"pair initialization method:";
    pair<int,string>p1={1,"mehedi"};
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,string>p2(2,"hasan");
        cout<<p2.first<<" "<<p2.second<<endl;
        pair<int,string>p3;
        p3=make_pair(3,"alex");
            cout<<p3.first<<" "<<p3.second<<endl;



            cout<<"nested pair:"<<endl;
            pair<int,pair<string,string>>p={1,{"mehedi","hasan"}};
            cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
        cout<<"pair inside containers:"<<endl;
        cout<<"vector:"<<endl;
        vector<pair<int,string>>v={{1,"mango"},{2,"jackfruit"},{2,"banana"}};
        for(auto x:v) cout<<x.first<<" "<<x.second<<endl;
        cout<<endl;   
          set<pair<int,string>>s={{1,"cow"},{2,"deer"},{3,"tiger"},{3,"tiger"}};
       cout<<"set"<<endl;
       for(auto x:s) cout<<x.first<<" "<<x.second<<endl;
       cout<<endl;
       cout<<"comparison of pairs:"<<endl;
       pair<int,int>a={1,2};
       pair<int,int>b={1,3};
       (a<b)?cout<<"yes"<<endl:cout<<"no"<<endl;
       cout<<"swap:"<<endl;
       swap(a,b);
       cout<<"pair a: ";
       cout<<a.first<<" "<<a.second<<endl;
       cout<<"pair b: ";
       cout<<b.first<<" "<<b.second<<endl;
       cout<<"vector of pairs before sorted:"<<endl;
       vector<pair<int,int>>vv={{3,4},{1,2},{3,1}};
       for(auto x:vv)cout<<x.first<<" "<<x.second<<endl;
       cout<<endl;
       sort(vv.begin(),vv.end());
       cout<<"vector of pairs after sorted:"<<endl;
       for(auto x:vv)cout<<x.first<<" "<<x.second<<endl;
       cout<<endl;

}    
