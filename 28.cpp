class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int x)
    {
        sort(a,a+n);
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            if(a[i]+a[l]+a[r]==x)
                return true;
                else if(a[i]+a[l]+a[r]<x)
                l++;
                else if(a[i]+a[l]+a[r]>x)
                r--;
        }
    }
    return false;
    }

};
