#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;

    // // Pattern 1 -> square of 4 stars
    // for(int rows=1; rows<5; rows++){
    //     for(int col=1; col<5; col++){
    //         cout << "*  ";
    //     }
    //     cout << endl;
    // }

    // cout<<endl << endl;


    // // Pattern 2 -> Rectangle
    // for(int i=0; i<=2; i=i+1){
    //     for(int j=0; j<5; j=j+1){
    //         cout<< "*  " ;
    //     }
    //     cout<<endl;
    // }

    // cout<<endl << endl;


    // Pattern 3 -> Hollow Rectangle
    // int ROWS ;
    // int COLS ;
    // cout << "Enter Number of Rows : ";
    // cin >> ROWS;
    // cout << "Enter Number of Columns : ";
    // cin >> COLS;

    // for (int rows = 0; rows < ROWS; rows=rows+1)
    // {
    //     for (int cols = 0; cols < COLS; cols++)
    //     {
    //         if (rows==0 || rows== ROWS-1)
    //             cout << "* ";
    //         else if (cols == 0 || cols == COLS-1)
    //             cout << "* ";
    //         else
    //             cout << "  ";            
    //     }
    //     cout<< endl;
    // }


    // Pattern 4 -> Half Pyramid
    // for (int rows = 0; rows < n; rows=rows+1){

    //     for(int cols = 0; cols < rows+1; cols = cols+1){
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }
    

    // Pattern 5 -> Inverted half Pyramid
    // for (int rows = 0; rows < n; rows=rows+1){

    //     for(int cols = ROWS; cols > rows; cols = cols-1){
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }


    //Pattern 6 -> Numeric Half Pyramid
    // for(int row = 0; row < n;row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << col+1 << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl << endl;


    // //Pattern 7 -> Inverted Numeric Half Pyramid
    // for(int row=0; row<n;row=row+1){
    //     for(int col=0; col<n-row; col=col+1){
    //         // cout<< col+1 <<" ";
    //         cout<< n-col <<" ";          // for reverse counting
    //     }
    //     cout << endl;
    // }


    //Pattern 8 -> Full Pyramid
    // for(int row=0; row<n; row=row+1){
    //      // Inner Loop for Space
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     }

    //     // Inner Loop for Star
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }


    //Pattern 9 -> Inverted Full Pyramid
    // for(int row=0; row<n; row=row+1){
    //      // Inner loop for space
    //     for(int col=0; col<row; col=col+1){
    //         cout << " ";
    //     }
    //      // Inner loop for Star
    //     for(int col=0; col<n-row; col=col+1){
    //         cout << "* ";
    //     }        
    //     cout << endl;
    // }


    // Pattern 10 -> Diamond Pattern
    int num = n/2;
    // for(int row=0; row<num; row=row+1){
    //      // Inner Loop for Space
    //     for(int col=0; col<num-row-1; col=col+1){
    //         cout << " ";
    //     }

    //     // Inner Loop for Star
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }
    
    // for(int row=0; row<num; row=row+1){
    //     // Inner loop for space
    //     for(int col=0; col<row; col=col+1){
    //         cout << " ";
    //     }
    //      // Inner loop for Star
    //     for(int col=0; col<num-row; col=col+1){
    //         cout << "* ";
    //     }        
    //     cout << endl;
    // }


    // Pattern 11 -> Hollow Pyramid
    // for(int row=0; row<n; row=row+1){
    //      // Inner Loop for Space
    //     for(int col=0; col<n-row-1; col=col+1){
    //         cout << " ";
    //     }

    //     // Inner Loop for Star
    //     for(int col=0; col<row+1; col=col+1){
    //         if (col==0 || col==row)
    //         {
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
            
    //     }

    //     cout << endl;
    // }


    // Pattern 12 -> Inverted Hollow Pyramid
    // for(int row=0; row<n; row=row+1){
    //     // Inner Loop for space
    //     for(int col=0; col<row; col=col+1){
    //         cout << " ";
    //     }
    //     // Inner loop for star
    //     for(int col=0; col<n-row; col=col+1){
    //          if (col==0 || col==n-row-1)
    //         {
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // Pattern 13 -> Hollow Diamond Pattern
    // for(int row=0; row<num; row=row+1){
    //      // Inner Loop for Space
    //     for(int col=0; col<num-row-1; col=col+1){
    //         cout << " ";
    //     }

    //     // Inner Loop for Star
    //     for(int col=0; col<row+1; col=col+1){
    //         if (col==0 || col==row)
    //         {
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
            
    //     }

    //     cout << endl;
    // }

    //     for(int row=0; row<num; row=row+1){
    //     // Inner Loop for space
    //     for(int col=0; col<row; col=col+1){
    //         cout << " ";
    //     }
    //     // Inner loop for star
    //     for(int col=0; col<num-row; col=col+1){
    //          if (col==0 || col==num-row-1)
    //         {
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // Pattern 14 -> Fliped Solid Pattern
    // int num = n/2;
    // for(int row=0; row<num; row=row+1){
    //     for(int col=0; col<num-row; col=col+1){
    //         cout<< "* ";
    //     }
    //     for(int col=0; col<2*row+1; col=col+1){
    //         cout << "  ";
    //     }
    //     for(int col=0; col<num-row; col=col+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int row=0; row<num; row=row+1){
    //     for(int col=0; col<row+1; col=col+1){
    //         cout<< "* ";
    //     }
    //     for(int col=0; col<2*(num-row)-1; col=col+1){
    //         cout << "  ";
    //     }
    //     for(int col=0; col<row+1; col=col+1){
    //         cout << "* ";
    //     }
    //       cout << endl;
    // }


    // Pattern 15 ->
    // for(int i=0; i<num; i++){
    //     for(int j=0; j<2*i+1; j++){
    //         if(j%2==0){
    //             cout << i+1;
    //         }
    //         else{
    //             cout << " * ";
    //         }
    //     }
    //     cout <<endl;
    // }

    // for(int i=0; i<num; i++){
    //     for(int j=0; j<2*(num-i)-1; j++){
    //         if(j%2==0){
    //             cout << num-i;
    //         }
    //         else{
    //             cout << " * ";
    //         }
    //     }
    //     cout <<endl;
    // }


    // Pattern 16 -> Hollow Inverted Half Pyramid
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col=col+1){
    //         if(col==0 || col==n-row-1 || row==0){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // Pattern 17
    // for(int row=0; row<n; row=row+1){
    //     char ch;
    //     for(int col=0; col< row+1; col=col+1){
    //         ch = col+ 65 ; // + 'A';
    //         cout << ch << " ";
    //     }
    //     for(char alphabet=ch-1; alphabet >= 'A'; alphabet--){
    //         cout << alphabet << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 18 -> numeric Hollow Inverted Half Pyramid
    // for(int r=0; r<n; r=r+1){
    //     for(int c=0; c<n-r; c=c+1){
    //         if(c==0 || c==n-r-1 || r==0){
    //             cout<< c+r+1 << " ";
    //         }
    //         else{
    //                 cout << "  ";
    //             }          
    //     }
    //     cout << endl;
    // }


    // Pattern 20 -> Numeric Palindrome Equilateral Pyramid
    //  for(int r=0; r<n; r=r+1){
    //     // Inner Loop for Space 
    //     for(int c=0; c<n-r-1; c=c+1){
    //         cout << "  ";
    //     }
    //     // Inner Loop for Number 
    //     for (int c=0; c<r+1; c=c+1){
    //         cout<< c+1 << " ";
    //     }
    //     // Inner Loop for Reverse Numbering
    //     for(int c=0; c<r; c=c+1){
    //         cout<< r-c << " ";
    //     }
    //     cout << endl;
    //  }


    //  Pattern 21 ->  Fancy pattern 1
    // for(int r=0; r<n; r=r+1){
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


    // Pattern 22 -> Solid Half Diamond
    // for(int r=0; r<n; r=r+1){
    //     for(int c=0; c<r+1; c=c+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int r=0; r<n-1; r=r+1){
    //     for(int c=0; c<n-r-1; c=c+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // Pattern 23 -> floy'd Triangle
    int number = 1;
    for(int r=0; r<n; r=r+1){
        for(int c=0; c<r+1; c=c+1){
            cout << number << " ";
            number++;
        }
        cout << endl;
    }

    // Pattern 24 -> fancy Pattern 2
    // int number1 = 1;
    // for(int r=0; r<n; r++){
    //     for(int c=0; c<2*r+1; c++){
    //         if(c%2==0){
    //             cout << number1 ;
    //             number1 ++;
    //         }
    //         else{
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // int number2 = number1-n;
    // for(int r=0; r<n; r++){
    //     int start = number2;
    //     for(int c=0; c<2*(n-r)-1; c++){
    //         if(c%2==0){
    //             cout << start ;
    //             start++;
    //         }
    //         else{
    //             cout << "*";
    //         }
    //     }
    //     number2 = number2 - (n-r-1);
    //     cout << endl;
    // }

    // Pattern 25 -> Fancy pattern 3
    // if(n%2 == 0)
    //     n=n/2;
    // else
    //     n=(n/2)+1;
    // cout << "*" << endl;
    // for(int r=0; r<n-1; r++){
    //     cout << "*" << " ";
    //     for(int c=0; c<r+1; c++){
    //         cout << c+1 << " ";
    //     }
    //     for(int c=0; c<r; c++){
    //         cout << r-c << " ";
    //     }
    //     cout << "*" << " ";
    //     cout << endl;
    // }
    // for(int r=0; r<n; r++){
    //     cout << "*" << " ";
    //     for(int c=0; c<n-r; c++){
    //         cout << c+1 << " ";
    //     }
    //     for(int c=0; c<n-r-1; c++){
    //         cout << n-c-r-1 << " ";
    //     }
    //     cout << "*" << " ";
    //     cout << endl;
    // }
    // cout << "*" << endl;

    // pattern 26 -> Butterfly pattern
        // Outer Loop for Upper part
    // for(int r=0; r<num; r=r+1){
    //     // inner Loop for left star
    //     for(int c=0; c< r+1; c=c+1){
    //         cout << "* ";
    //     }
    //     // inner loop for space
    //     for(int c=0; c< 2*(num-r-1); c=c+1){
    //         cout << "  ";
    //     }
    //     // inner Loop for right star
    //     for(int c=0; c< r+1; c=c+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    //     // // Outer Loop for Inner part
    // for(int r=0; r<num; r=r+1){
    //     // inner Loop for left star
    //     for(int c=0; c< num-r; c=c+1){
    //         cout << "* ";
    //     }
    //     // inner loop for space
    //     for(int c=0; c< 2*r; c=c+1){
    //         cout << "  ";
    //     }
    //     // inner Loop for right star
    //     for(int c=0; c< num-r; c=c+1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Pattern 27 -> Pascal's Triangle Pattern
    for(int r=1; r<=n; r++){
        int P = 1;
        for(int c=1; c<=r; c++){
            cout << P << " ";
            P = P * (r-c) / c;
        }
        cout << endl;
    }
}