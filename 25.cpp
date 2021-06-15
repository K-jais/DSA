class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        map<int,int> x;
        int check=n/k;
        for(int i=0;i<n;i++){
            auto it=x.find(arr[i]);
            if(it!=x.end()){
                it->second=it->second+1;
            }else{
                x.insert({arr[i],1});
            }
        }
        int count=0;
        for(auto it=x.begin();it!=x.end();it++){
            if((it->second)>check){
                count++;
            }
        }
        return count;
    }
};
