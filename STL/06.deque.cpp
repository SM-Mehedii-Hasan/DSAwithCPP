#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq={1,2,3,4,5};
    cout<<"the original deque:"<<endl;
    for(auto x:dq) cout<<x<<" ";
    cout<<endl;
// ____________________after push and insert__________________
            
      
 dq.insert(dq.begin()+2,10);
dq.push_back(10);
      dq.push_front(10);
     
       cout<<"after push and insert::"<<endl;
    for(auto x:dq) cout<<x<<" ";
    cout<<endl;
    //________________________Deletions____________________________________________
    dq.erase(dq.begin()+3);
    dq.pop_back();
     dq.pop_front();
     
     cout<<"after deletion:"<<endl;
    for(auto x:dq) cout<<x<<" ";
    cout<<endl;
    //__________access___________________________
    cout<<dq[0]<<endl;
    cout<<dq.at(0)<<endl;
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    cout<<dq.at(4)<<endl;
    cout<<dq[4]<<endl;



    //______________swap and sort_________________
    deque<int>dq1={3,4,2,5,1};
    deque<int>dq2={5,6,9,8};
    cout<<"before swap:"<<endl;
    for(auto x:dq1) cout<<x<<" ";
    cout<<endl;
    for(auto x:dq2) cout<<x<<" ";
    cout<<endl;
    dq1.swap(dq2);
      cout<<"after swap:"<<endl;
    for(auto x:dq1) cout<<x<<" ";
    cout<<endl;
    for(auto x:dq2) cout<<x<<" ";
    cout<<endl;
    sort(dq2.begin(),dq2.end());
       cout<<"after sorting ascending order:"<<endl;
    for(auto x:dq2) cout<<x<<" ";
    cout<<endl;
    sort(dq2.rbegin(),dq2.rend());
     cout<<"after sorting descending order:"<<endl;
    for(auto x:dq2) cout<<x<<" ";
    cout<<endl;
    if(dq1==dq2) cout<<" dq1 is equal to d2"<<endl;
    else cout<<" dq1 is  not equal to d2"<<endl;


    //____________iterations_______________________________
    deque<int>d={1,2,3,4,5};
    cout<<"using iterator:"<<endl;
    for(auto it=d.begin();it!=d.end();it++) cout<<*it<<" ";
    cout<<endl;
    cout<<"using reverse iterator:"<<endl;
    for(auto rit=d.rbegin();rit!=d.rend();rit++) cout<<*rit<<" ";
    cout<<endl;
    


}
