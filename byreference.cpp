// Reference Variable and Call by Reference & call by value
#include<iostream>
using namespace std;

// Call By value
int incrementByValue (int n){
    n = n+1;
    return n;
}

// Call By Reference
void incrementByRef (int &n){
    n = n+1;
}

int main (){
    int n ;   // Original variable
    // int &p = n;     // Reference variable - refer to n 
    // int &f = n;     // Reference variable - refer to n 

    cout << "Enter Value of n : " ;
    cin >> n;
    // cout << "p : " << p << endl;
    // cout << "f : " << f << endl;

// Call By value
    // n = incrementByValue(n);
    // cout << "n : " << n << endl;

// Call By Reference
    incrementByRef(n);
    cout << "n : " << n << endl;
}