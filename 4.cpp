void sort012(int a[], int n)
{
    int zero=0,one=0,two=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        zero++;
        else if(a[i]==2)
        two++;
        else if(a[i]==1)
        one++;
    }
    for(int i=0;i<n;i++)
    {
        if((i+1)<=zero)
        a[i]=0;
        else if((i+1)>zero && (i+1)<=(one+zero))
        a[i]=1;
        else if((i+1)>(one+zero) && (i+1)<=(one+zero+two))
        a[i]=2;
    }
}
