#include<iostream>
#include<array> 
using namespace std;
struct pair{
    int max;
    int min;
}; 

struct pair max_min(int a[]){
    struct pair p2;
    int max= -1;
    int min= 7;
    int n=sizeof(a)/sizeof(a[0]);
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
	struct pair p1;
	int a[]={1,2,3,4,5,6};
	p1=max_min(a);
	cout<<"Max: "<<p1.max<<" Min: "<<p1.min;
	return 0;
}
