#include<bits/stdc++.h>
using namespace std;
int main(){
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
//    cout<<"front element: "<<q.front()<<endl;
//    cout<<"back element: "<<q.back()<<endl;
//    q.pop();
//    cout<<"front element after pop: "<<q.front()<<endl;
//    cout<<"back element after pop: "<<q.back()<<endl;

   cout<<"element of queue:";
   while(!q.empty()){
    cout<<q.front()<<" ";
     q.pop();
   }cout<<endl;
   priority_queue<int>pq;
    pq.push(1);
   pq.push(2);
   pq.push(3);
   pq.push(4);
   pq.push(5);
   cout<<"element of priority queue: ";
   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
   }
   cout<<endl;
   priority_queue<int,vector<int>,greater <int>>pqmin;
   pqmin.push(1);
   pqmin.push(5);
   pqmin.push(3);
   pqmin.push(4);
   pqmin.push(2);
   cout<<"priority queue min heap:";
   while(!pqmin.empty()){
    cout<<pqmin.top()<<" ";
    pqmin.pop();
   }cout<<endl;
   
}
