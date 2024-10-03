#include<iostream>
using namespace std;



// Q1. function to print sum of 3 Numbers.
void sumNumbers(int a, int b, int c){
    int sum = a+b+c;
    cout << sum;
}

int addNumbers(int a, int b, int c){
    int sum = a+b+c;
   return sum;
}

// Q2. Counting from 1 to N
void printNumber(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
} 

// Q3 Find Max of Three Numbers
void maxNumber(int a, int b, int c){
    if(a>=b && a>=c)
        cout <<a << " is maximum" << endl;
    else if(b>=c)
        cout << b << " is maximum" << endl;
    else
        cout << c << " is maximum" << endl;
}

// Q5 Check Even or Odd
void evenOdd(int n){
    if(n%2==0)
        cout << n << " is even"<< endl;
    else
        cout << n << " is odd" << endl;
}

// Q6 Sum of all Numbers upto N
void sumofNNumbers(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "sum of " << n << " numbers is : " << sum << endl;
}

// Q7 Sum of all Even Numbers upto N
void sumofEvenNumbers(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            sum += i;
        }
    }
    cout << "sum of even numbers till " << n << " is :" << sum << endl;
}


int main(){
    // sumNumbers(10,20,15);
    //     cout << endl;
    // cout << addNumbers(15,17,20) << endl;

    // printNumber(50);

    // maxNumber(154, 78, 55);

    // evenOdd(173);

    // sumofNNumbers(15);

    // sumofEvenNumbers(18);

    return 0;
}