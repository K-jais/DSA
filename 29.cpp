class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int a[], int n){
        int sum=0;
        int height[n];
        height[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            height[i]=max(a[i],height[i+1]);
        }
        int pivot=a[0];
        for(int i=1;i<n-1;i++){
            if(a[i]<pivot){
                if(pivot<height[i]){
                    sum+=pivot-a[i];
                }else{
                    sum+=height[i]-a[i];
                }
            }
            if(a[i]>pivot){
                pivot=a[i];
            }
        }
        return sum;
    }
};
