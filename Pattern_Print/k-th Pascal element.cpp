
// __________1.Iterative multiplicative formula (without factorials)___________________________________________


// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;cin>>r>>c;
//  long long int val=1;
//  for(int i=1;i<=c;i++){
//     val=val*r;
//     r--;
//     val=val/i;
//  }
//   cout<<val<<endl;

//  }





//________________________2.Iterative multiplicative formula (alternative indexing)_______________________________


// #include<iostream>
// using namespace std;
// int main(){
//     int n, c;
//     cin >> n >> c; 
//     long long res = 1;

//     for(int i=0; i<c; i++){
//         res = res * (n - i);
//         res = res / (i + 1);
//     }

//     cout << res << endl;
// }




//__________________________3.Iterative multiplicative formula with symmetry optimization___________________________________


// #include <iostream>
// using namespace std;

// int main() {
//     int r, c;
//     cin >> r >> c;

//     if (c > r - c) c = r - c; // use symmetry
//     long long val = 1;

//     for (int i = 1; i <= c; i++) {
//         val = val * r;
//         r--;
//         val = val / i;
//     }
//     cout << val << endl;
//     return 0;
// }




//________________________4.Factorial formula_____________________

// #include <iostream>
// using namespace std;

// int main() {
//     int r, c;
//     cin >> r >> c;

//     long long int rfact = 1, cfact = 1, rcfact = 1;

//     for (int i = 1; i <= r; i++) 
//         rfact *= i;

    
//     for (int j = 1; j <= c; j++) 
//         cfact *= j;


//     for (int k = 1; k <= r - c; k++) 
//         rcfact *= k;

 
//     long long int element = rfact / (cfact * rcfact);

//     cout << element << endl;

//     return 0;
// }
