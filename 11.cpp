class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int x=0;
        for(int i=0;i<n;i++){
            if (nums[abs(nums[i])] >= 0)
            nums[abs(nums[i])] = -nums[abs(nums[i])];
            else
            x=abs(nums[i]);
        }
        
        return x;
    }
};


One more thing to remember,
XOR opertaion,
x^x=0
  x^0=x
  0^x=x
  
  To find the duplicates when there are even number of duplicates of a single number.
  
  #include <stdio.h>
 
// Function to find a duplicate element in a limited range array
int findDuplicate(int A[], int n)
{
    int xor = 0;
 
    // take xor of all array elements
    for (int i = 0; i < n; i++) {
        xor ^= A[i];
    }
 
    // take xor of numbers from 1 to `n-1`
    for (int i = 1; i <= n-1; i++) {
        xor ^= i;
    }
 
    // same elements will cancel each other as a ^ a = 0,
    // 0 ^ 0 = 0 and a ^ 0 = a
 
    // `xor` will contain the missing number
    return xor;
}
 
int main()
{
    // input array contains `n` numbers between 1 and `n-1`
    // with one duplicate
    int arr[] = { 1, 2, 3, 4, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("The duplicate element is %d", findDuplicate(arr, n));
 
    return 0;
}



