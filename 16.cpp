long long int merge(long long arr[], long long l, long long m, long long r)
{
    long long int n1 = m - l + 1;
    long long int n2 = r - m;
    long long int inv=0;
    // Create temp arrays
    long long L[n1], R[n2];
 
    // Copy data to temp arrays L[] and R[]
    for (long long int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (long long int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Merge the temp arrays back into arr[l..r]
 
    // Initial index of first subarray
    int i = 0;
 
    // Initial index of second subarray
    int j = 0;
 
    // Initial index of merged subarray
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
            inv+=(n1-i);
        }
        k++;
    }
 
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    return inv;
}
long long int merge_sort(long long arr[],long long l,long long r){
    if(l>=r){
        return 0;//returns recursively
    }
    long long int m =l+ (r-l)/2;
    long long int a=merge_sort(arr,l,m);
    long long int b=merge_sort(arr,m+1,r);
    long long int c=merge(arr,l,m,r);
    return a+b+c;
}

long int inversionCount(long long arr[], long long n)
{
    long long int m=merge_sort(arr,0,n-1);
    return m;
}
