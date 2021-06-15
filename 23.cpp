FOR MAXPRODUCT SUBARRAY
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long minVal = arr[0];
	long long maxVal = arr[0];

	long long maxi = arr[0];

	for (int i = 1; i < n; i++) {

		// When multiplied by -ve number,
		// maxVal becomes minVal
		// and minVal becomes maxVal.
		if (arr[i] < 0)
			swap(maxVal, minVal);

		// maxVal and minVal stores the
		// product of subarray ending at arr[i].
		maxVal = max((long long)arr[i], maxVal * (long long)arr[i]);
		minVal = min((long long)arr[i], minVal * (long long)arr[i]);

		// Max Product of array.
		maxi = max(maxi, maxVal);
	}
	return maxi;
	}
};
FOR MAXSUM SUBARRAY
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long minVal = arr[0];
	long long maxVal = arr[0];

	long long maxi = arr[0];

	for (int i = 1; i < n; i++) {

		// When multiplied by -ve number,
		// maxVal becomes minVal
		// and minVal becomes maxVal.
		if (arr[i] < 0)
			swap(maxVal, minVal);

		// maxVal and minVal stores the
		// product of subarray ending at arr[i].
		maxVal = max((long long)arr[i], maxVal + (long long)arr[i]);
		minVal = min((long long)arr[i], minVal + (long long)arr[i]);

		// Max Product of array.
		maxi = max(maxi, maxVal);
	}
	return maxi;
	}
};
