vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        int temp[n * n];
    int k = 0;
 
    // copy the elements of matrix one by one
    // into temp[]
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[k++] = mat[i][j];
 
    // sort temp[]
    sort(temp, temp + k);
     
    // copy the elements of temp[] one by one
    // in mat[][]
    k = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = temp[k++];
            return mat;
    }
};
