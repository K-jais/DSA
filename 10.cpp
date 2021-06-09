int minJumps(int arr[], int n){
        // Your code here
        int step=arr[0],maxrange=arr[0],jump=1;
        
       if(n==1)
       return 0;
       else if(arr[0]==0)
       return -1;
       else
       {
           for(int i=1;i<n;i++)
           {
               if(i==n-1)
               return jump;
               maxrange=max(maxrange,i+arr[i]);
               
               step--;
               if(step==0)
               {
                   jump++;
                   step=maxrange-i;
                   if(i>=maxrange) return -1;
                   }
               
               
           }
           
        }
        
    }
