int doUnion(int g1[], int n, int g2[], int m)  {
        sort(g1,g1+n); // to sort
        sort(g2,g2+m);
        vector<int> a;
        vector<int> b;
        int main=-1;
        for(int i=0;i<n;i++) // to remove duplicates
        {
            if(main!=g1[i])
            {
                a.push_back(g1[i]);
                main=g1[i];
            }
        }
        main=-1;
        for(int i=0;i<m;i++)
        {
            if(main!=g2[i])
            {
                b.push_back(g2[i]);
                main=g2[i];
            }
        }
        n=a.size();
        m=b.size();
        int count=0,secondindex=0;
        if(n>m)
        {
            for(int i=0;i<n;i++)
            {
                if(b[secondindex]<a[i] && secondindex<m)
                {
                   secondindex++;
                   i--;
                }
                else if(b[secondindex]>a[i] && secondindex<m){
                    continue;
                }
                else if(b[secondindex]==a[i] && secondindex<m){
                    count++;
                    secondindex++;
                }
            }
        }else{
            for(int i=0;i<m;i++)
            {
                if(a[secondindex]<b[i] && secondindex<n)
                {
                   secondindex++; 
                   i--;
                }
                else if(a[secondindex]>b[i] && secondindex<n){
                    continue;
                }
                else if(a[secondindex]==b[i] && secondindex<n){
                    count++;
                    secondindex++;
                }
            }
        }
        a.clear();
        b.clear();
        return n+m-count;
    }


Optimized code : Used unordered_set<int> a;


FOR INTERSECTION,
// C++ program to find duplicate from an array using
// unordered_set
#include <bits/stdc++.h>
using namespace std;

// Print duplicates in arr[0..n-1] using unordered_set
void printDuplicates(int arr[], int n)
{
	// declaring unordered sets for checking and storing
	// duplicates
	unordered_set<int> intSet;
	unordered_set<int> duplicate;

	// looping through array elements
	for (int i = 0; i < n; i++)
	{
		// if element is not there then insert that
		if (intSet.find(arr[i]) == intSet.end())
			intSet.insert(arr[i]);

		// if element is already there then insert into
		// duplicate set
		else
			duplicate.insert(arr[i]);
	}

	// printing the result
	cout << "Duplicate item are : ";
	unordered_set<int> :: iterator itr;

	// iterator itr loops from begin() till end()
	for (itr = duplicate.begin(); itr != duplicate.end(); itr++)
		cout << *itr << " ";
}

// Driver code
int main()
{
	int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
	int n = sizeof(arr) / sizeof(int);

	printDuplicates(arr, n);
	return 0;
}

