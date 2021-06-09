int minJumps(int a[], int n){
        int min=n,minin=0,check=0+a[0],minjump=1,flag=0;
        if(a[0]!=0){
            for(int i=0;i<n;i++){
            if(i<=check){
                if((n-a[0]-1)<0){
                    break;
                }
               if(n-a[i]-1-i<min && (a[i]+i)!=0)
               {
                    min=n-a[i]-1-i;
                    if(min<=0){
                        minjump++;
                        break;
                    }
                    minin=i;
                } 
            }
            if(i==check){
                minjump++;
                if(flag==minin){
                    flag=-1;
                    break;
                }
                check=minin+a[minin];
                if(check>=n-1){
                    break;
                }
                flag=minin;
            }
        }
        if(flag==-1){
            return -1;
        }
        return minjump;
        }else{
            return -1;
        }
    }
