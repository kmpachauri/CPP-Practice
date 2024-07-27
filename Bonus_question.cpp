#include <iostream>
using namespace std;

int main(){
    // Question 1
    // int n;
    // if (cin >> n){
    //     cout << " Krishanmohan ";
    // }
    // else{
    //     cout << "Pachauri";
    // }


    // Question 2
    int n1=10;
    if(cout << n1){
        cout << " Aman" ;
    }

    
    // Pattern Homework Question
    int n; 
    cout << "enter no. : ";
    cin >> n;
    // Q1 -> Solid Sqaure Pattern
    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // Q2 -> Hollow Square Pattern
    for(int r=0; r<n; r++){
        for(int c=0; c<n; c++){
            if(c==0 || c==n-1 || r==0 || r==n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Q3 -> Hollow Inverted Half Pyramid
    for(int r=0; r<n; r++){
        for(int c=0; c<n-r; c++){
            if(c==0 || c==n-r-1 || r==0){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Q4 -> Hollow Full Pyramid
    for(int r=0; r<n; r++){
        for(int c=0; c<n-r-1; c++){
            cout << "  ";
        }
        for(int c=0; c<r+1;c++){
            if(c==0 || r==n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }    
        }
        for(int c=0; c<r; c++){
            if(c==r-1 || r==n-1){
                cout<< "* ";
            }
            else{
                cout << "  ";
            } 
        }
        cout << endl;
    }

}