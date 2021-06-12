class Solution
{
    public:    
       vector <int> commonElements (int a[], int b[], int c[], int n1, int n2, int n3)
        {
            unordered_set<int> d;
            unordered_set<int> e;
            unordered_set<int> f;
            for(int i=0;i<n1;i++){
                d.insert(a[i]);
            }
            for(int i=0;i<n2;i++){
                if(d.find(b[i])!=d.end()){
                    e.insert(b[i]);
                }
            }
            for(int i=0;i<n3;i++){
                if(e.find(c[i])!=e.end()){
                    f.insert(c[i]);
                }
            }
            vector<int> g;
            for(auto itr=f.begin();itr!=f.end();itr++){
                g.push_back(*itr);
            }
            sort(g.begin(),g.end());
            d.clear();
            e.clear();
            f.clear();
            return g;
            
        }

};
