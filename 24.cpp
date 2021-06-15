class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
       set<int> s;
       for(int i=0;i<n;i++){
           s.insert(arr[i]);
       }
       int length=0,length_so_far=INT_MIN;
        for(auto it=s.begin();it!=--s.end();it++){
            if(*(++it) - *(--it) == 1){
                length++;
            }else{
                length=0;
            }
            if(length_so_far<=length){
                length_so_far=length;
            }
        }
        if(s.size()>1)
        return length_so_far+1;
        else
        return 1;
    }
};
