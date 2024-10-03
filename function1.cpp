// Homework Question for Functions
#include<iostream>
#include <math.h>
using namespace std;
 
// Q1 To find area of circle
float areaOfCircle (float r){
    float pi = 3.14;
    float area = pi*r*r;
    return area;
}

// Q2 To find factorial of a Number
int factorial(int number){
    int sol = 1;
    for(int i=2; i<=number; i++){
        sol *= i;
    }
    return sol;
}

// Q3 Convert Km to Miles or Miles to Km
void kmToMiles(float km ,float mile){
    // Km to miles
    float miles = km/1.609;
    cout << miles ;

    cout << endl;
    // Mile to Km
    float Kilometer = mile*1.609;
    cout << Kilometer;
}

// Q4 Convert Farhenhite to celcious
float farhenhiteToCelcious (float tempF){
    float tempC = (tempF - 32)*5/9;
    return tempC;
}

// Q5 Check Even or Odd using bitwise operator
bool EvenorODD (int n){
    if((n & 1) == 0)
        return true;
    else    
        return false;
}

// Q6 Check Prime Number or Not
// Q7 Prime Numbers from 1 to N
bool checkPrime (int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
            return false;
    }
    return true;
}

// Q8 Print Binary representation of decimal Number
int decimalToBinary (int n){
    int binaryNo = 0 , i =0;
// Divisive method
    // while(n > 0){
    //     int bit = n % 2;
    //     binaryNo = bit * pow(10,i++) + binaryNo;
    //     n = n / 2;
    // }
// Bitwise Method
    while (n > 0){
       int bit = n & 1;
       binaryNo = bit * pow(10,i++) + binaryNo;
       n = n >> 1;
    }
    return binaryNo;
}

// Q9 Binary to Decimal Representation
int binaryToDecimal(int n){
    int decimalNo = 0, i = 0;
    while (n){
        int digit = n % 10;
        decimalNo = digit * pow(2,i++) + decimalNo;
        n = n/10;
    }
    return decimalNo;
}

// Q10 Count all set bits of a Number
int countSetBits (int n){
    int count = 0;
    while(n > 0){
        int bit = n & 1;  // n % 2;
        if(bit == 1)
            count++;
        n = n >> 1 ; // n/2;
    }
    return count;
}
// Q4 Print all digits of a Integar - Ultra Important
int digitsFromNumber (int n){
    while (n){
        int digits = n % 10;
        cout << "Digits of Number is : " << digits << endl;
        n = n / 10;
    }
}
// Q12 Create a Number using digits  - Ultra Important
int numberUsingDigits (int n){
    int num = 0;
    for(int i=0; i<n; i++){
        cout << "Enter Digits : ";
        int digits;
        cin >> digits ;
        num = num * 10 + digits;
        cout <<"Number Using Digits is : " << num << endl;
    }
    return num;
}

int main(){
    int n;
    cin >> n;
    // cout << areaOfCircle(4.7);
 
    // cout << factorial(5);
   
    // kmToMiles(18 , 11.1871);
   
    // cout << farhenhiteToCelcious(64);
  
    // bool isEven = EvenorODD(n);
    // if(isEven){
    //     cout << n << " is a Even Number." ;
    // }
    // cout << n << " is a Odd Number";
  

    // bool isPrime = checkPrime(n);
    // if(isPrime){
    //     cout << n << " is a Prime Number.";
    // }
    // else
    //     cout << n << " is not a Prime Number.";
    
    // for(int i=2; i<=n; i++){
    //     bool isPrime = checkPrime(i);
    //     if(isPrime){
    //         cout << i << " ";
    //     }
    // }
   
    
    // int binaryNumber = decimalToBinary (n);
    // cout << "Binary Number of " << n << " is " << binaryNumber;
  

    // int decimalNumber = binaryToDecimal(n);
    // cout << "Decimal of Binary Number " << n << " is " << decimalNumber;

    // int setBitsCount = countSetBits (n);
    // cout << "Count of Set Bits in Number " << n << " is " << setBitsCount;

    // int Number = numberUsingDigits(n);
    // cout << "The Final Number Using all digits is : " << Number;

    digitsFromNumber (n);
   
    return 0;
}
