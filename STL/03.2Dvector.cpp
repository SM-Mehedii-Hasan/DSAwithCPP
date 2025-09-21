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


// ___________________________________________________________________________________
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec;

    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,4,5};
    vector<int> v3 = {1,2,3,4};
    vector<int> v4 = {1,2,3,4,5};
    vector<int> v5 = {1,2,5};

    vec.push_back(v1);
    vec.push_back(v2);
    vec.push_back(v3);
    vec.push_back(v4);
    vec.push_back(v5);

  //this is buggy !!!!!
    // // 2. Indexed loop (using v1.size())
    // for(size_t i=0; i<vec.size(); i++){
    //     for(size_t j=0; j<v1.size(); j++){
    //         cout << vec[i][j] << " ";
    //     }
    //     cout << endl;
    // }



    // 1. Indexed loop (using vec[i].size())
    cout << "Indexed loop:\n";
    for(size_t i=0; i<vec.size(); i++){
        for(size_t j=0; j<vec[i].size(); j++){
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n\n";

    // 2. Range-based loop (modern C++ style)
    cout << "Range-based loop (row + element):\n";
    for(auto v : vec){          // each 'v' is a row (vector<int>)
        for(auto it : v){       // each 'it' is an element of the row
            cout << it << " ";
        }
        cout << endl;
    }

    cout << "\n\n";

    // 3. Hybrid style: indexed outer, range-based inner
    cout << "Hybrid loop (indexed outer, range-based inner):\n";
    for(size_t i=0; i<vec.size(); i++){   // row index
        for(auto it : vec[i]){            // each element
            cout << it << " ";
        }
        cout << endl;
    }
        cout << "\n\n";

    // 3. Hybrid loop (range-based + indices)
    cout << "Hybrid loop:\n";
    for(size_t i=0; i<vec.size(); i++){   // row index
        size_t j = 0;
        for(auto &val : vec[i]){          // iterate elements
            cout << "(" << i << "," << j << ")=" << val << " ";
            j++;
        }
        cout << endl;
    }
}







// 🚩 What not to do
// Don’t use a fixed size like v1.size() → unsafe if rows are different sizes.
// ✅ What you should use (always)
// If you only need to read or print values
// → Use range-based for loops (cleanest and safest):
// for (auto &row : vec) {
//     for (auto &val : row) {
//         cout << val << " ";
//     }
//     cout << endl;
// }
// If you also need indices (row/col positions)
// → Use the hybrid style (indexed outer, range-based inner):
// for (size_t i = 0; i < vec.size(); i++) {
//     for (auto &val : vec[i]) {
//         cout << val << " "; // you can still access j if needed
//     }
//     cout << endl;
// }
// If you need full index control (e.g., algorithms, matrix operations)
// → Use pure indexed loops:

// for (size_t i = 0; i < vec.size(); i++) {
//     for (size_t j = 0; j < vec[i].size(); j++) {
//         cout << vec[i][j] << " ";
//     }
//     cout << endl;
// }
// ⭐ Rule of thumb
// Default → use range-based (simplest).
// Need row index → hybrid.
// Need both row + column indices → full indexed.
// 👉 If you want one single style to use always, I’d say:
// Use the hybrid loop — it’s clean, safe, and flexible.
// ___________________________________________________________________________________________________
#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<vector<int>>vec1;
  vector<int>vec2[5];
  vec1.push_back({10,20,30,40});
  vec1.push_back({20,30,40});
  vec1[0].push_back(100);
  vec1.push_back({100});
  vec1[2].push_back(40);
  for(auto r:vec1){
    for(auto it:r){
      cout<<it<<" ";
    }cout<<endl;
  }
  cout<<"\n\n\n";
  vec2[0].push_back(1);
  vec2[1].push_back(4);
  vec2[0].push_back(2);
  vec2[3].push_back(4);
  vec2[2].push_back(10);
  vec2[2].push_back(3);
  vec2[2].push_back(2);

    for(auto r:vec2){
    for(auto it:r){
      cout<<it<<" ";
    }cout<<endl;
  }
}


// ✅ Key observations:
// vector<vector<int>> vec1 allows dynamic addition of rows and columns.
// vector<int> vec2[5] has a fixed number of rows (5), but each row can grow dynamically.
// Both types can be printed the same way using range-based for loops.
// vec1 can handle unknown number of rows at runtime, whereas vec2 cannot.






