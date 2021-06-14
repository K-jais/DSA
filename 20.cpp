IN O(n^2)
/* C++ program to rearrange
positive and negative integers
in alternate fashion while keeping
the order of positive and negative numbers. */
#include <assert.h>
#include <iostream>
using namespace std;

// Utility function to right rotate all elements between
// [outofplace, cur]
void rightrotate(int arr[], int n, int outofplace, int cur)
{
	char tmp = arr[cur];
	for (int i = cur; i > outofplace; i--)
		arr[i] = arr[i - 1];
	arr[outofplace] = tmp;
}

void rearrange(int arr[], int n)
{
	int outofplace = -1;

	for (int index = 0; index < n; index++)
	{
		if (outofplace >= 0)
		{
			// find the item which must be moved into the
			// out-of-place entry if out-of-place entry is
			// positive and current entry is negative OR if
			// out-of-place entry is negative and current
			// entry is negative then right rotate
			//
			// [...-3, -4, -5, 6...] --> [...6, -3, -4,
			// -5...]
			//	 ^						 ^
			//	 |						 |
			//	 outofplace	 -->	 outofplace
			//
			if (((arr[index] >= 0) && (arr[outofplace] < 0))
				|| ((arr[index] < 0)
					&& (arr[outofplace] >= 0)))
			{
				rightrotate(arr, n, outofplace, index);

				// the new out-of-place entry is now 2 steps
				// ahead
				if (index - outofplace >= 2)
					outofplace = outofplace + 2;
				else
					outofplace = -1;
			}
		}

		// if no entry has been flagged out-of-place
		if (outofplace == -1) {
			// check if current entry is out-of-place
			if (((arr[index] >= 0) && (!(index & 0x01)))
				|| ((arr[index] < 0) && (index & 0x01))) {
				outofplace = index;
			}
		}
	}
}

// A utility function to print an array 'arr[]' of size 'n'
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

// Driver code
int main()
{
	
	int arr[] = { -5, -2, 5, 2,
				4, 7, 1, 8, 0, -8 };
	int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, n);

	rearrange(arr, n);

	cout << "Rearranged array is \n";
	printArray(arr, n);

	return 0;
}


NOW in O(nlogn)
  
  // Below is the implementation of the above approach
import java.io.*;
import java.lang.*;
import java.util.*;
public class Main {

	// function which works in the condition when number of
	// negative numbers are lesser or equal than positive
	// numbers
	static void fill1(int a[], int neg, int pos)
	{
		if (neg % 2 == 1) {
			for (int i = 1; i < neg; i += 2) {
				int c = a[i];
				int d = a[i + neg];
				int temp = c;
				a[i] = d;
				a[i + neg] = temp;
			}
		}
		else {
			for (int i = 1; i <= neg; i += 2) {
				int c = a[i];
				int d = a[i + neg - 1];
				int temp = c;
				a[i] = d;
				a[i + neg - 1] = temp;
			}
		}
	}
	// function which works in the condition when number of
	// negative numbers are greater than positive numbers
	static void fill2(int a[], int neg, int pos)
	{
		if (pos % 2 == 1) {
			for (int i = 1; i < pos; i += 2) {
				int c = a[i];
				int d = a[i + pos];
				int temp = c;
				a[i] = d;
				a[i + pos] = temp;
			}
		}
		else {
			for (int i = 1; i <= pos; i += 2) {
				int c = a[i];
				int d = a[i + pos - 1];
				int temp = c;
				a[i] = d;
				a[i + pos - 1] = temp;
			}
		}
	}
	static void reverse(int a[], int n)
	{
		int i, k, t;
		for (i = 0; i < n / 2; i++) {
			t = a[i];
			a[i] = a[n - i - 1];
			a[n - i - 1] = t;
		}
	}
	static void print(int a[], int n)
	{
		for (int i = 0; i < n; i++)
			System.out.print(a[i] + " ");
		System.out.println();
	}
	public static void main(String[] args)
		throws java.lang.Exception
	{
		// Given array
		int[] arr = { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
		int n = arr.length;

		int neg = 0, pos = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0)
				neg++;
			else
				pos++;
		}
		// Sort the array
		Arrays.sort(arr);

		if (neg <= pos) {
			fill1(arr, neg, pos);
		}
		else {
			// reverse the array in this condition
			reverse(arr, n);
			fill2(arr, neg, pos);
		}
		print(arr, n);
	}
}
