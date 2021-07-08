int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int l = mat[0][0], r = mat[n - 1][n - 1];
 
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int ans = 0;
 
    for (int i = 0; i < n; i++) {
        // if num is less than the first element then no more element in matrix
        // further are less than or equal to num
        if (mat[i][0] > mid) {
            break;
        }
        // if num is greater than last element, it is greater than all elements
        // in that row
        if (mat[i][n - 1] <= mid) {
            ans += n;
            continue;
        }
        // This contain the col index of last element in matrix less than of equal
        // to num
        int greaterThan = 0;
        for (int jump = n / 2; jump >= 1; jump /= 2) {
            while (greaterThan + jump < n &&
                   mat[i][greaterThan + jump] <= mid) {
                greaterThan += jump;
            }
        }
 
        ans += greaterThan + 1;
    }
        int greaterThanOrEqualMid = ans;
        if (greaterThanOrEqualMid >= k)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return l;
}
