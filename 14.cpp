class Solution {
public:
    static bool compareInterval(vector<int>& a,vector<int>& b){
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),compareInterval);
        stack<vector<int>> s;
        s.push(intervals[0]);
        for(int j=1;j<intervals.size();j++)
        {
            vector<int> a;
            a=s.top();
            if((a[0]<=intervals[j][1] && a[0]>=intervals[j][0]) || (a[1]<=intervals[j][1] && a[1]>=intervals[j][0]) || (a[0]<=intervals[j][0] && a[1]>=intervals[j][1])){
                if(a[0]>intervals[j][0]){
                    a[0]=intervals[j][0];
                }
                if(a[1]<intervals[j][1]){
                    a[1]=intervals[j][1];
                }
                s.pop();
                s.push(a);
            }else{
                s.push(intervals[j]);
            }
        }
        intervals.clear();
        while(!s.empty()){
            vector<int> b;
            b=s.top();
            intervals.push_back(b);
            s.pop();
        }
        return intervals;
    }
};


Learnt sorting in nested vectors and usage of stack
