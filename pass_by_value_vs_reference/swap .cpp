#include<iostream>
using namespace std;

// Swap function using XOR and pass by reference
void Swap(int& a,int& b){
    a = a ^ b;  // Step 1: a = a XOR b
    b = a ^ b;  // Step 2: b = original a
    a = a ^ b;  // Step 3: a = original b
}

int main(){
    int a = 10, b = 20;
    Swap(a,b);  // Call the swap function

    cout << "a = " << a << "\n" << "b = " << b << endl;
}
