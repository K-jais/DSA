class Solution{
public:
	void merge(int a[], int b[], int n, int m) {
	    int i=0,j=0,temp,k=n-1;
	    while(i<=n-1 && j<=m-1){
	        if(k<i){
	            break;
	        }
	        if(a[i]<=b[j]){
	            i++;
	        }
	        else if(a[i]>b[j]){
	            temp=a[k];
	            a[k]=b[j];
	            b[j]=temp;
	            j++;
	            k--;
	        }
	        if(k<i)
	        break;
	    }
	    sort(a,a+n);
	    sort(b,b+m);
	}
};
