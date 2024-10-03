#include<iostream>
using namespace std;

void printArray (int arr [] , int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
} 

int searchArray (int arr [] , int size , int target){
    for(int i=0; i<size;i++)
    {
        if(arr[i] == target)
            return true;
    }    
    return false;
}

void countZeroOne (int countArr [] , int size){
    int oneCount = 0;
    int zeroCount = 0;
    int otherCount = 0;

    for(int i=0; i<size; i++){
        if(countArr[i] == 1){
            oneCount++;
        }
        else if(countArr[i] == 0){
            zeroCount++;
        }
        else{
            otherCount++;
        }
    }

    cout << "No. of count of 1 : " << oneCount << endl;
    cout << "No. of count of 0 : " << zeroCount << endl;
    cout << "No. of count of Other Number than 1 & 0 : " << otherCount << endl;
}

void reverseArray (int arr[] , int size){
    // Reversing the array
    int left = 0;
    int right = size - 1;
    while(!(left > right)){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

    // for(int left = 0,right = size - 1; !(left > right); left++,right--){
    //     swap(arr[left] , arr[right]);
    // }
    
    // Printing the array
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

void extremePrint (int arr[] , int size){
    int left = 0;
    int right = size - 1;
    
    while(left <= right){
        if(left == right){
            cout << arr[left] << " ";
        }
        else{
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
}

int main(){
    // // static array Creation
    // int arr1 [10];
    // cout << "Base Address of arr1 : " << arr1 << endl;
    // cout << "Size of arr1 : " << sizeof(arr1) << endl;

    // char arr2 [5];
    // cout << "Base Address of arr2 : " << &arr2 << endl;
    // cout << "Size of arr2 : " << sizeof(arr2) << endl;

    // long  arr3[7];
    // cout << "Base Address of arr3 : " << &arr3 << endl;
    // cout << "Size of arr3 : " << sizeof(arr3) << endl;

    // short arr4[15];
    // cout << "Base Address of arr4 : " << arr4 << endl;
    // cout << "Size of arr4 : " << sizeof(arr4) << endl;

    // // Array Initilization
    // int brr1 [ ] = {1,2,3,4,5};
    // cout << brr1 << endl;
    // int brr2 [5] = {1,2,3,4,5};
    // int brr3 [5] = {1,2,3};
    // // int brr4 [5] = {1,2,3,4,5,7,8};  // will throw an error of excess element


    // // This is an bad practice to initialize array , instead we should use dynamic array.
    // int n;
    // cin >> n;
    // int arr[n];
    // cout << "n input array base addres : " << arr << endl;
    // cout << "n input array size : " << sizeof(arr) << endl;


    // // Indexing of an array -> used to access elements of an array. -> always starts from zero
    // int arr[5] = { 4 , 5 ,45, 48 , 25};
    // cout << arr[2] << " " << arr[4] << endl;

    // int number[50] = {1,45,12,78,95,12,10,14};
    // // Accessing all elements or Printing an array
    // for(int i=0; i<50; i++){
    //     cout << number[i] << " ";
    // }
    // cout << endl;

    // // Taking Input in an array
    // int input[5];
    // for(int i=0; i<5; i++){
    //     cin >> input[i];
    // }
    // for(int i=0; i<5; i++){
    //     cout << input[i] << " ";
    // }    


    // // Problem statement -> 1. create an array size of 10  2.Take input from user 3.Double-up each value of array
    // int arr[10];
    // int n = 10;
    // cout << "Enter values for array : ";
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // cout << "Values after Doubling : ";
    // for(int i=0; i<n; i++){
    //     arr[i] = 2*arr[i];
    //     cout << arr[i] << " ";
    // }

    
    // // Problem statement -> 1. create an array size of 5  2.Take input from user 3.Find Sum of all values
    // int arr[5];
    // int n = 5;
    // cout << "Enter values for array : ";
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // int sum = 0;
    // for(int i=0; i<n; i++){
    //     sum = sum + arr[i];
    // }
    // cout << "Sum of all values of array : "<< sum;

// Find Target value in Array
    // int arr[5] = {10,15,20,25,30};
    // int n = 5;
    // bool flag =0;
    // int target = 17;
    // for(int i=0; i<n; i++){
    //     if (target == arr[i])
    //     {
    //         flag = 1;
    //         break;
    //     }
        
    // }

    // if(flag == 1){
    //     cout << "Target Found ";
    // }
    // else{
    //     cout << "Target not found";
    // }

    // int arr[7] = {15,12,14,78,36};
    // int size = 5; 
    // int target = 17;

// Function call to Print Array
    // printArray(arr,size);

// Linear search in array to find target value
    // bool ans = searchArray(arr,size,target);
    // if(ans == 1)
    //     cout<< "Target Found..";
    // else
    //     cout << "Target not Found";

// funcion to count the no, of zero & one
    // int countArr [ ] = {0,1,1,0,0,1,1,0,1,0,1,1,0,1,1,0,0,10,148,45} ;
    // int size = 20;
    // countZeroOne(countArr,size);

// Find the minimum Number in an array
    // int number[10] = {10,2,4,5,8,-98,-12,36,78,14};
    // int size = 10;
    // int minNumber = INT_MAX;
    // int maxNumber = INT_MIN;
    // for(int i = 0; i<size; i++){
    //     if(number[i] < minNumber){
    //         minNumber = number[i];
    //     }
    //     if(number[i] > maxNumber){
    //         maxNumber = number[i];
    //     }
    // }
    // cout << "Minimum Number in Array : " << minNumber << endl;
    // cout << "Maxmium Number in Array : " << maxNumber << endl;



    int arr[9] = {10,15,23,47,89,65,12,17,95};
    int size = 9;

// Reverese The array 
    // reverseArray(arr,size);

// Exterem print of an array
    extremePrint(arr,size);

}