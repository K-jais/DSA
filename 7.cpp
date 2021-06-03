void rotate(int a[], int n)
{
   int temp=a[n-1],temp1=a[0],temp2=0;
   for(int i=0;i<n-1;i++)
   {
       temp2=a[i+1];
       a[i+1]=temp1;
       temp1=temp2;
   }
   a[0]=temp;
}
