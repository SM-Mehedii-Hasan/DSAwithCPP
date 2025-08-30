
#include<bits/stdc++.h>
using namespace std;
int main(){


    // _______________________________________________________________________

    cout<<"empty vector:"<<endl;
    vector<int>emptyvector;
    cout<<emptyvector.size()<<" "<<emptyvector.capacity()<<endl;
    emptyvector.push_back(30);
    cout<<emptyvector.size()<<" "<<emptyvector.capacity()<<endl;


// _________________________________________________________________________________________
    cout<<"vector with size:"<<endl;
    vector<int>vectorwithsize(5);
    cout<<vectorwithsize.size()<<" "<<vectorwithsize.capacity()<<endl;
    vectorwithsize.push_back(5);
    cout<<vectorwithsize.size()<<" "<<vectorwithsize.capacity()<<endl;
     vectorwithsize.push_back(5);
     vectorwithsize.push_back(5);
     vectorwithsize.push_back(5);
     vectorwithsize.push_back(5);
     cout<<vectorwithsize.size()<<" "<<vectorwithsize.capacity()<<endl;
     vectorwithsize.push_back(5);
       cout<<vectorwithsize.size()<<" "<<vectorwithsize.capacity()<<endl;
       for(auto x:vectorwithsize) cout<<x<<" ";
       cout<<endl;
    
       

  //__________________________________________________________________________
  cout<<"vector with value:"<<endl;
  vector<int>vectorwithvalue(5,10);
  cout<<vectorwithvalue.size()<<" "<<vectorwithvalue.capacity()<<endl;
  vectorwithvalue.push_back(20);
   cout<<vectorwithvalue.size()<<" "<<vectorwithvalue.capacity()<<endl;
     for(auto x:vectorwithvalue) cout<<x<<" ";
       cout<<endl;



   //____________________________________________________________________
   cout<<"Vector from array:"<<endl;
   vector<int>vectorwithinitialization={1,2,3,4,5};
   cout<<vectorwithinitialization.size()<<" "<<vectorwithinitialization.capacity()<<endl;
   vectorwithinitialization.push_back(394);
   cout<<vectorwithinitialization.size()<<" "<<vectorwithinitialization.capacity()<<endl;
     for(auto x:vectorwithinitialization) cout<<x<<" ";
       cout<<endl;



    //_____________________________________________________________________________
     cout<<"Create empty vector"<<endl;
     vector<int>v;
     v.push_back(10);
     v.push_back(20);
     v.push_back(30);
     v.push_back(40);
     v.push_back(50);
     cout<<"vector element after push back:"<<endl;
     for(auto x:v) cout<<x<<" ";
     cout<<endl;
     v.pop_back();
          cout<<"vector element after pop back:"<<endl;
     for(auto x:v) cout<<x<<" ";
     cout<<endl;
//_____________________________________________________________________________
vector<int>v1={1,2,3,4,5};

     cout<<"using different iterating method:"<<endl;
     cout<<"mehtod-1:Range-based for loop"<<endl;
     for(auto x:v1) cout<<x<<" ";
     cout<<endl;


     cout<<"method-2:Using iterators "<<endl;
     for(auto it=v1.begin();it!=v1.end();it++) cout<<*it<<" ";
     cout<<endl;


     cout<<"method-3:Traditional index-based loop"<<endl;
     for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";
     cout<<endl;
    //  _________________________________________________________________
    cout<<"SORTING & OTHER FUNCTIONS"<<endl;
    vector<int>num={4, 1, 3, 5, 2};
   
    for(auto x:num) cout<<x<<" ";
     cout<<endl;
      cout<<"sort decending"<<endl;
     sort(num.rbegin(), num.rend()); 
     for(auto x:num) cout<<x<<" ";
     cout<<endl;
     sort(num.begin(),num.end());
     cout<<"after sorting:"<<endl;
        for(auto x:num) cout<<x<<" ";
     cout<<endl;
       cout<<"search:"<<endl;
 bool found = binary_search(num.begin(), num.end(), 1);
cout << (found ? "yes" : "no") << endl;
      reverse(num.begin(),num.end());
      cout<<"after reverse:"<<endl;
       for(auto x:num) cout<<x<<" ";
     cout<<endl;
   

     //_________________________________________________________
     cout<<"Demonstration of capacity growth"<<endl;
     vector<int>vv;
     for(int i=1;i<=10;i++){
        vv.push_back(i);
        cout<<"size:"<<vv.size()<<" "<<"capacity:"<<vv.capacity()<<endl;
     }

     //_______________________________________________________
     cout<<" ELEMENT ACCESS METHODS"<<endl;
     vector<int>accessvec={1,2,3,4,5};
     cout<<"accessvec[2]="<<accessvec[2]<<endl;
     cout<<"accessvec.at(2)="<<accessvec.at(2)<<endl;
     cout<<"accessvec.front()="<<accessvec.front()<<endl;
     cout<<"accessvec.beging()="<<accessvec.back()<<endl;
     cout<<"before modification:"<<endl;
     for(auto x:accessvec) cout<<x<<" ";
     cout<<endl;

     accessvec[1]=20;
     accessvec.at(3)=30;
      cout<<"after modification:"<<endl;
     for(auto x:accessvec) cout<<x<<" ";
     cout<<endl;

      //________________________________ USEFUL ALGORITHMS_________________________________________
      vector<int>vvv={1,3,4,5,6,7,8,8,9,12,2,13,15,16,29};
      cout<<"before sorting:"<<endl;
       for(auto x:vvv) cout<<x<<" ";
      cout<<endl;
      sort(vvv.begin(),vvv.end());
      cout<<"after sorting:"<<endl;
      for(auto x:vvv) cout<<x<<" ";
      cout<<endl;
      auto it=lower_bound(vvv.begin(),vvv.end(),10);
      cout<<"lower_bound of 10 points to:"<<*it<<endl;
      auto it2=upper_bound(vvv.begin(),vvv.end(),12);
      cout<<"upper_bound of 12 points to:"<<*it2<<endl;
      int max_val=*max_element(vvv.begin(),vvv.end());
      cout<<"max value:"<<max_val<<endl;
        int min_val=*min_element(vvv.begin(),vvv.end());
      cout<<"min value:"<<min_val<<endl;
     int sum = accumulate(vvv.begin(), vvv.end(), 0);
     cout<<"sum="<<sum<<endl;








 




}
