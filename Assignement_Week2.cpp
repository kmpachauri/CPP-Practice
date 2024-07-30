#include <iostream>
using namespace std;

int main(){
//    // Pattern Homework Question
//     int n; 
//     cout << "enter no. : ";
//     cin >> n;
//     // Q1 -> Solid Sqaure Pattern
//     for(int r=0; r<n; r++){
//         for(int c=0; c<n; c++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     cout << endl;

//     // Q2 -> Hollow Square Pattern
//     for(int r=0; r<n; r++){
//         for(int c=0; c<n; c++){
//             if(c==0 || c==n-1 || r==0 || r==n-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     cout << endl;

//     // Q3 -> Hollow Inverted Half Pyramid
//     for(int r=0; r<n; r++){
//         for(int c=0; c<n-r; c++){
//             if(c==0 || c==n-r-1 || r==0){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     cout << endl;

//     // Q4 -> Hollow Full Pyramid
//     for(int r=0; r<n; r++){
//         for(int c=0; c<n-r-1; c++){
//             cout << "  ";
//         }
//         for(int c=0; c<r+1;c++){
//             if(c==0 || r==n-1){
//                 cout << "* ";
//             }
//             else{
//                 cout << "  ";
//             }    
//         }
//         for(int c=0; c<r; c++){
//             if(c==r-1 || r==n-1){
//                 cout<< "* ";
//             }
//             else{
//                 cout << "  ";
//             } 
//         }
//         cout << endl;
//     }


    // Pattern
    int n;
    cout << "Enter No. of Rows : ";
    cin >> n;

    // Numeric Hollow Half Pyramid
    // for(int r=0; r<n; r++){
    //     for(int c=0; c<r+1; c++){
    //         if(c==0 || c==r || r==n-1){
    //             cout << c+1 << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
            
    //     }
    //     cout << endl;
    // }

    // Numeric Hollow Inverted Half Pyramid
    // for(int r=0; r<n; r++){
    //     for(int c=0; c<n-r; c++){
    //         if(c==0 || c== n-r-1 || r==0)
    //             cout << c+r+1 << " ";
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Numeric palindrome Equilateral Pyramid
    // for(int r=0; r<n; r++){
    //     for(int c=0; c<n-r-1; c++){
    //         cout << "  ";
    //     }
    //     for(int c=0; c<r+1; c++){
    //         cout << c+1 << " ";
    //     }
    //     for(int c=0; c<r; c++){
    //         cout << r-c << " ";
    //     }
    //     cout << endl;
    // }

    // Soild Half Diamond
    // int num;
    // if(n%2 == 0){
    //     num = n/2;
    // }
    // else{
    //     num =n/2 + 1;
    // }
    
    // for(int r=0;r<num; r++){
    //     for(int c=0; c<r+1; c++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int r=0; r<num-1; r++){
    //     for(int c=0; c<num-r-1; c++){
    //         cout<< "* ";
    //     }
    //     cout << endl;
    // }

    // Fancy Pattern #1
    //     for(int r=0; r<n; r=r+1){
    //     // Inner Loop for Inverted Star Half Pyramid
    //     for(int c=0; c<2*n-r-2; c=c+1){
    //         cout << "* ";
    //     }
    //     // Inner Loop for Full Pyramid
    //     for(int c=0; c<r+1; c=c+1){
    //         cout << r+1 << " * ";
    //     }
    //      // Inner Loop for Reverse Inverted Star Half Pyramid
    //     for(int c=0; c<2*n-r-2; c=c+1){
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // Fancy Pattern #2
    // int num=n/2;
    // int count = 1;
    // for(int r=0; r<num; r++){
    //     for(int c=0; c<2*r+1 ; c++){
    //         if(c%2 == 0){
    //             cout << count << " ";
    //             count++;
    //         }
    //         else{
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }

    // int start = count - num;
    // for(int r=0; r<num; r++){
    //     int k=start;
    //     for(int c=0; c< 2*(num-r)-1 ; c++){
    //         if(c%2 == 0){
    //             cout << k << " ";
    //             k++;
    //         }
    //         else{
    //             cout << "* ";
    //         }
    //     }
    //     start = start - (num-r-1);
    //     cout << endl;
    // }

    // Fancy Pattern #3 -> Pura nhi h ye
    // for(int row = 0; row < n; row++){
    //     int col;
    //     for(col=0; col<row+1; col++){
    //         if(col==0 || row==0){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << col << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // Flyod's triangle
    // int count = 0;
    // for(int r=0; r<n; r++){
    //     for(int c=0; c< r+1; c++){
    //         cout << count + 1 << " ";
    //         count ++;
    //     }
    //     cout << endl;
    // }

    // pascal's triangle
    for(int r=1; r<=n; r++){
        int count=1;
        for(int c=1; c<=r; c++){
            cout << count << " ";
            count = count*(r-c)/c;
        }
        cout << endl;
    }
}