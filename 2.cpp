#include<iostream>
#include<array>
#include<bits/stdc++.h> 
using namespace std;
struct node{
    int max;
    int min;
}; 

struct node maxmin(int a[],int n){
    struct node p2;
    int max= INT_MIN;
    int min= INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    p2.min=min;
    p2.max=max;
    return p2;
}

int main() {
	struct node p1;
    cout<<"hi";
	int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);
	p1=maxmin(a,n);
	cout<<"Max: "<<p1.max<<" Min: "<<p1.min;
	return 0;
}
