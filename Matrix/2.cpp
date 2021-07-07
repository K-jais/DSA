class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int l=0;int r=m-1;
        int n=matrix[0].size();
        while(l<=r){
            int mid=(l+r)/2;
            if(target==matrix[mid][0] || target==matrix[mid][n-1]){
                    return true;
                }
            if(target>matrix[mid][0] && target<matrix[mid][n-1]){
                int l1=1;int r1=n-2;
                while(l1<=r1){
                    int mid1=(l1+r1)/2;
                    if(matrix[mid][mid1]==target){
                        return true;
                    }
                    else if(matrix[mid][mid1]<target){
                        l1=mid1+1;
                    }
                    else{
                        r1=mid1-1;
                    }
                }
                return false;
            }else if(target<matrix[mid][0]){
                r=mid-1;
            }else if(target>matrix[mid][n-1]){
                l=mid+1;
            }
        }
        return false;
    }
};
