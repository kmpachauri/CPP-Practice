#include <iostream>
using namespace std;

// Find Unique Element
int uniqueElement(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

// print all Possible pairs(doublets) of an array
void printAllPairs(int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")" << " ";
            // int sum = arr[i] + arr[j];
            // cout << "-> " << sum << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

// Print all triplets of an array
void printAllTriplets(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << " ";
            }
        }
        cout << endl;
    }
}

// Sort 0s & 1s
void sortZeroOne(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    //  To count the zeros & ones
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeroCount++;
        if (arr[i] == 1)
            oneCount++;
    }

    // to put all zero at once
    int index = 0;
    while (zeroCount--)
    {
        arr[index] = 0;
        index++;
    }

    // to put all one at once
    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }

    // int index;
    //     for( index=0; index<zeroCount;index++){
    //         arr[index] = 0;
    //     }
    //     for(int j = index; j<n;j++){
    //         arr[j] = 1;
    //     }
}

void sortZeroOneByTwoPointer(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    for (int i = 0; i < n; i++)
    {
        while (left < right)
        {
            if (arr[left] == 0)
        {
            left++;
        }
        if (arr[right] == 1)
        {
            right--;
        }
        if (arr[left] == 1 && arr[right] == 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        }
        
    }
}

// Shift Array
void shiftArray(int arr[], int n)
{
    // right shift by one
    // int temp = arr[n-1];
    // for(int i = n-1; i>0; i--){
    //     arr[i] = arr[i-1];
    // }
    // arr[0] = temp;

    // left shift by one
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    // printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Right Shift by k value
void rightShiftByValue(int arr[], int n)
{
    int k = 2;
    int temp[k];

    // storing k values of an array in an temp array
    for (int i = 0, j = n - k; i < k; i++, j++)
    {
        temp[i] = arr[j];
    }

    // Shifting by k
    for (int i = n - 1; i > k - 1; i--)
    {
        arr[i] = arr[i - k];
    }

    // Again storing temp array value in the starting of an array
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }

    // printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// left shift by k value
void leftShiftArrayByValue(int arr[], int n)
{
    int k = 2;
    int temp[k];
    // storing k values of an array in an temp array
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    // Shifting by k
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    // Again storing temp array value in the starting of an array
    for (int i = 0, j = n - 2; i < k; i++, j++)
    {
        arr[j] = temp[i];
    }

    // printing Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // Find Unique Elements
    // int arr[] = {10,2,4,6,3,23,4,6,3,2,10,17,14,17,14};
    // int n = 15;

    // int finalAns = uniqueElement(arr, n);
    // cout << "Unique Element is : " << finalAns;

    // Print all Possibe pairs(doublets)  or Triplets of an array
    // int arr[] = {12,10,17};
    // int n = 3;
    // // printAllPairs(arr,n);
    // printAllTriplets(arr, n);

    // Sort 0s & 1s
    int arr[] = {0, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0};
    int n = 16;

    // sortZeroOne(arr,n);
    sortZeroOneByTwoPointer(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // // Shift Array
    //     int arr[] = {10,20,30,40,50,60,70};
    //     int n = 7;

    //     // shiftArray(arr,n);
    //     // cout << endl;
    //     // rightShiftByValue(arr,n);
    //     // cout << endl;
    //     // leftShiftArrayByValue(arr,n);
    //     // cout << endl;
}