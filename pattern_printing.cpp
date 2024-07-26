#include<iostream>
using namespace std;

int main(){

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
    // int ROWS ;
    // cout << "Enter Number of Rows : ";
    // cin >> ROWS;

    // for (int rows = 0; rows < ROWS; rows=rows+1){

    //     for(int cols = 0; cols < rows+1; cols = cols+1){
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }
    
    // Inverted half Pyramid
    // int ROWS ;
    // cout << "Enter Number of Rows : ";
    // cin >> ROWS;

    // for (int rows = 0; rows < ROWS; rows=rows+1){

    //     for(int cols = ROWS; cols > rows; cols = cols-1){
    //         cout <<"* ";
    //     }
    //     cout << endl;
    // }

    // Numeric Half Pyramid
    int n;
    cout << "Enter Number of Rows : ";
    cin >> n;

    for(int row = 0; row < n;row=row+1){
        for(int col=0; col<row+1; col=col+1){
            cout << col+1 << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    // Inverted Numeric Half Pyramid
    for(int row=0; row<n;row=row+1){
        for(int col=0; col<n-row; col=col+1){
            // cout<< col+1 <<" ";
            cout<< n-col <<" ";          // for reverse counting
        }
        cout << endl;
    }

}