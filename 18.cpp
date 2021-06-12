class Solution{   
public:
    int getPairsCount(int a[], int n, int k) {
        int count=0;
        int temp[k]={0};
        for(int i=0;i<n;i++){
            int temp2=k-a[i];
            if(temp2<k && temp2>0){
                count+=temp[temp2];
            }
            int temp1=a[i];
            if(temp1<k && temp1>0){
                temp[temp1]++;
            }
        }
        return count;
    }
};
