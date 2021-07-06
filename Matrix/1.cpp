vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
    vector<int> a;
    int k=0;int n=0;
    if(r%2==0)
    n=(r/2)-1;
    else
    n=r/2;
    if(r>1){
        for(int i=0;i<=n;i++){
        for(int j=i;j<=c-1-i;j++){
            a.push_back(matrix[i][j]);
            k++;
        }
        if(k==(r*c)){
            break;
        }
        for(int j=i+1;j<=r-1-i;j++){
            a.push_back(matrix[j][c-1-i]);
            k++;
        }
        if(k==(r*c)){
            break;
        }
        for(int j=c-1-i-1;j>=i;j--){
            a.push_back(matrix[r-1-i][j]);
            k++;
        }
        if(k==(r*c)){
            break;
        }
        for(int j=r-1-i-1;j>=i+1;j--){
            a.push_back(matrix[j][i]);
            k++;
        }
        if(k==(r*c)){
            break;
        }
    }
    
    }else{
        for(int i=0;i<c;i++){
            a.push_back(matrix[0][i]);
        }
    }
    
    return a;
    }
