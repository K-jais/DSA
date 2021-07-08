int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int max=INT_MIN,row=-1;
	    int place=0;
	    for(int i=0;i<n;i++){
	        place=upper_bound(arr[i].begin(),arr[i].end(),0) - arr[i].begin();
	        place=m-place;
	        if(max<place){
	        max=place;
	        row=i;
	        }
	    }
	    if(max==0)
	    return -1;
	    else
	    return row;
	}
