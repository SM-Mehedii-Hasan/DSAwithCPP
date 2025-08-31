// _________1. Declaration, dynamic resizing, initialization, and traversal of a 2D vector in C++._____________________


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<vector<int>> vec2d;
//     cout <<"vec2d size/empty vector:" <<vec2d.size() << endl;

//     vec2d.resize(4);
//     vec2d[0].resize(10);
//     vec2d[1].resize(15);
//     vec2d[2].resize(8);        
//     vec2d[3].resize(11);    

//     vec2d[0][0] = 1;
//     vec2d[1][0] = 8;
//     vec2d[3][9]=9;

//     cout << "row = "<<vec2d.size()<<" " <<"column = "<<vec2d[0].size()<< endl; 
//     cout << "vector vec2d:" << endl;

//     for(auto row : vec2d){
//         for(auto val : row)
//             cout << val << " ";
//         cout << endl;
//     }
// }


// _________2. 2D vector creation, initialization, modification, and traversal in C++ using constructor initialization.____________________

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int row=4,col=5;
//     vector<vector<int>> vec2d(row,vector<int>(col,0));
//     cout<<"row = "<<vec2d.size()<<" "<<"column = "<<vec2d[0].size()<<endl;
//     cout<<"the matrix is:"<<endl;
//     for(auto x:vec2d){
//         for(auto val:x) cout<<val<<" ";
//         cout<<endl;
//     }
//     vec2d[0][0]=1;
//        cout<<"after modify the matrix is:"<<endl;
//     for(auto x:vec2d){
//         for(auto val:x) cout<<val<<" ";
//         cout<<endl;
//     }
// }



//____________3. Accessing elements_______________________________
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> vec2d={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
//     cout<<"row= "<<vec2d.size()<<" "<<"column= "<<vec2d[0].size()<<endl<<endl;
//     cout<<"accessing elements:"<<endl;
//     cout<<"1.usng indices:"<<endl;
//     cout<<"vec2d[2][3]= "<<vec2d[2][3]<<endl<<endl;
//     cout<<"2.Using loops:"<<endl;
//     for(size_t i=0;i<vec2d.size();i++){
//         for(size_t j=0;j<vec2d[0].size();j++) cout<<vec2d[i][j]<<" ";
//         cout<<endl;
//     }
//     cout<<endl<<endl;
//     cout<<"3.Using range-based for loops:"<<endl;
//     for(auto x:vec2d) {
//         for(auto val:x) cout<<val<<" ";
//         cout<<endl;
//     }cout<<endl<<endl;

//     cout<<"4.access elements of a 2D vector using iterators"<<endl;
//     for(auto rit=vec2d.begin();rit!=vec2d.end();rit++){
//         for(auto cit=rit->begin();cit!=rit->end();cit++) cout<<*cit<<" ";
//         cout<<endl;
//     }
    
// }



// _____________Adding rows or elements______________
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<vector<int>> vec2d={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
//     cout<<"original vector:"<<endl;
//     for(auto &x:vec2d){
//         for(auto &val:x) cout<<val<<" ";
//         cout<<endl;
//     }
//     vec2d.push_back({5,5,5,5});
//      cout<<"after add new row on vector:"<<endl;
//     for(auto &x:vec2d){
//         for(auto &val:x) cout<<val<<" ";
//         cout<<endl;
//     }
//     vec2d[0].push_back(6);
//       cout<<"after add new element in first row :"<<endl;
//     for(auto &x:vec2d){
//         for(auto &val:x) cout<<val<<" ";
//         cout<<endl;
//     }

//     vec2d.pop_back();
//         cout<<"after remove last  row :"<<endl;
//     for(auto &x:vec2d){
//         for(auto &val:x) cout<<val<<" ";
//         cout<<endl;
//     }
//     vec2d[0].pop_back();
//          cout<<"after remove last  element of first row :"<<endl;
//     for(auto &x:vec2d){
//         for(auto &val:x) cout<<val<<" ";
//         cout<<endl;
//     }
//     vec2d.clear();
//           cout<<"after clear the vector :"<<endl;
//     for(auto &x:vec2d){
//         for(auto &val:x) cout<<val<<" ";
//         cout<<endl;
//     }
//     int row=vec2d.size();
//     int column=vec2d[0].size();
//     cout<<"after clear row size="<<row<<endl;
//     cout<<"after clear column size="<<column<<endl;


// }


// ___________Traversal______________________
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> vec2d={{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
     cout<<"original vector:"<<endl;
    for(auto &x:vec2d){
        for(auto &val:x) cout<<val<<" ";
        cout<<endl;
    }

    cout<<"Row sum:"<<endl;
    for(size_t i=0;i<vec2d.size();i++){
        int sum=0;
        for(size_t j=0;j<vec2d[0].size();j++) sum+=vec2d[i][j];
         cout<<sum<<endl;
    }
    cout<<"Column sum:"<<endl;
    for(size_t i=0;i<vec2d[0].size();i++){
        int sum=0;
        for(size_t j=0;j<vec2d.size();j++) sum+=vec2d[j][i];
        cout<<sum<<" ";
    }   

    
}
