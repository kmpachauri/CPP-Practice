#include<iostream>
using namespace std;

void printNumber(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;
} 

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;
    printNumber(n);
    printNumber(n);

    return 0;
}