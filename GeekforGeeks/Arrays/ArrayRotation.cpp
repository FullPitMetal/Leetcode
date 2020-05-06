// C++ program to rotate an array by 
// d elements 
#include <bits/stdc++.h>   // #include <bits/stdc++.h> 
using namespace std;  // Here the std is an abbreviation for standard. This line of code means that we are using all the things defined in this standard namespace.

/*Function to left Rotate arr[] of
size n by 1*/
// void: returns nothing. 
void leftRotatebyOne(int arr[], int n) 
{
	int temp = arr[0], i;  // defines temp as int, and i
	for (i = 0; i < n - 1; i++)  // for loop, cond: until 1 less of the array. ( array start from 0)
		arr[i] = arr[i + 1];   // move the element 1 to the left

	arr[i] = temp;
},

/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
	for (int i = 0; i < d; i++)
		leftRotatebyOne(arr, n);
}

/* utility function to print an array */
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
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
