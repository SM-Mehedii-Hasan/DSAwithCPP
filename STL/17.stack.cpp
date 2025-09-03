#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    cout<<"stack element: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    stack<pair<int,int>>sp;
    sp.push({1,10});
    sp.push({2,20});
    sp.push({3,30});
    cout<<"stack pair element: "<<endl;
    while(!sp.empty()){
         cout<<sp.top().first<<" "<<sp.top().second<<endl;
         sp.pop();

    }

    cout<<"reverse data:"<<endl;
    vector<int>v={1,2,3,4,5};
    stack<int>sv;
    for(auto x:v) sv.push(x);
    while(!sv.empty()){
        cout<<sv.top()<<" ";
        sv.pop();
    }cout<<endl;

    cout<<"balanced paranthesis:";
    string expr="((()())())";
    stack<char> st;
    bool balanced=true;
    for(auto x:expr) cout<<x<<" ";
    cout<<endl;
    for( auto x:expr){
        if(x=='(') st.push(x);
        else {
            if(st.empty()) {balanced=false;break;}
            st.pop();
        }

    }
    if(balanced&&st.empty()) cout<<"balanced\n";
    else cout<<"not balanced\n";



}
