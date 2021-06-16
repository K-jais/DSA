class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    sort(a.begin(),a.end());
    long long min=INT_MAX;
    if(m>n)
    return 0;
    if(a.size()<=1){
        return 0;
    }
    for(int i=0;i<=n-m;i++){
        if((a[m-1+i]-a[i])<min){
            min=a[m-1+i]-a[i];
        }
    }
    return min;
    }   
};
