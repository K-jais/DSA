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
