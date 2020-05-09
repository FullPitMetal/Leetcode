// ArratLibrary with function taken from the internet and explained
#include <bits/stdc++.h> 
using namespace std; 




// Group 1 ) Array Rotation
// C++ program to rotate an array by d elements 

/*Function to left Rotate arr[] of any size by 1 --- Moves all elements by 1 position - Doesn't return element */ 
void leftRotatebyOne(auto arr[]) {
    int len = sizeof(arr);
	auto temp = arr[0], i; 
	for (i = 0; i < len - 1; i++) 
		arr[i] = arr[i + 1]; 
	arr[i] = temp; 
} 

/*Function to left rotate arr[] by d positions*/
void leftRotate(auto arr[], int d) 
{ 
	for (int i = 0; i < d; i++) 
		leftRotatebyOne(arr); 
} 

/* utility function to print an array */
void printArray(auto arr[]) 
{   
    auto len = sizeof(arr);
	for (int i = 0; i < len; i++) 
		cout << arr[i] << " "; 
} 

/* Driver program to test above functions */
int main() 
{ 
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function calling 
	leftRotate(arr, 2, n); 
	printArray(arr, n); 

	return 0; 
} 
