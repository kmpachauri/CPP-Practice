#include <iostream>
using namespace std;

int main(){
    // If - Else Statement

    // Positive , Negative or Zero
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if(num>=0){
        if(num==0)
            cout << "Zero" << endl;
        else
            cout << "Positive" << endl;
    }
    else
        cout << "Negative" << endl;

    // Even or Odd
    int num1;
    cout << "Enter Number : ";
    cin >> num1;
    
    if(num1 % 2 == 0)
        cout << "Even" << endl;
    else if (!(num1 % 2 == 0))  
        cout << "Odd" << endl;
}