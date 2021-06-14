And finding in unordered_sert is faster than vector,
For finding if subarray is there of 0,

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int b[], int n)
    {
        int sum=0;
        unordered_set<int> a;
        for(int i=0;i<n;i++){
            if(b[i]==0)
            {
                return true;
            }
            sum+=b[i];
            if(sum==0 || a.find(sum)!=a.end()){
                return true;
            }
            a.insert(sum);
        }
        return false;
    }
};

For finding the subarray with particular sum,

class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        unordered_map<ll, ll> prevSum;
 
    ll res = 0;
    ll sum=0;
    // Sum of elements so far.
    ll currsum = 0;
 
    for (ll i = 0; i < n; i++) {
 
        // Add current element to sum so far.
        currsum += arr[i];
 
        // If currsum is equal to desired sum,
        // then a new subarray is found. So
        // increase count of subarrays.
        if (currsum == sum)
            res++;
 
        // currsum exceeds given sum by currsum
        //  - sum. Find number of subarrays having
        // this sum and exclude those subarrays
        // from currsum by increasing count by
        // same amount.
        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);
 
        // Add currsum value to count of
        // different values of sum.
        prevSum[currsum]++;
    }
        return res;
    }
};

