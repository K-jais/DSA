#include <iostream>
#include<array>
using namespace std;

int main() {
    int a[]={-12,11,-13,-5,6,-7,5,-3,-6};
    int n=sizeof(a)/sizeof(a[0]);
    int temp=-1,temp1=-1,t=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]>0 && temp==-1)
       temp=i;
       else if(a[i]<0 && i>temp && temp!=-1)
       temp1=i;
       
       if(temp!=-1 && temp1!=-1)
       {
           t=a[temp];
           a[temp]=a[temp1];
           a[temp1]=t;
           i=temp;
           temp=-1;
           temp1=-1;
       }
       
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
