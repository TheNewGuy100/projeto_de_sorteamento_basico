// C++ program for implementation of selection sort 
#include <iostream>
#include "../globalUnit/GlobalVariables.h"

using namespace std;
  
void swapcout(int *xp, int *yp) { 
    troc++;
    troc++;
    troc++;
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp;
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]) {
                comp++;
                min_idx = j;
            }
        }
  
        // Swap the found minimum element with the first element 
        swapcout(&arr[min_idx], &arr[i]);
    } 
} 
  
/* Function to print an array */
void printArraySelection(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 

// This is code is contributed by rathbhupendra
