int kthSmallest(int a[], int l, int r, int k) {
        int temp=0,min=INT_MAX,minindex=-1;
       for(int i=1;i<=k;i++){
           min=INT_MAX;
           for(int j=i-1;j<=r;j++){
               if(a[j]<min)
               {
                  min=a[j];
                  minindex=j;
               }
           }
           temp=a[i-1];
           a[i-1]=a[minindex];
           a[minindex]=temp;
       }
       return a[k-1];
    }


THE FAST CODE USING sort(startaddress,endaddress)
  
  sort(a,a+n);
	cout<<a[k-1]<<endl;
