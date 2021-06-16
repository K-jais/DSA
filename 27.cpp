string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int> a;
    int t=0;
    if(n>=m){
        for(int i=0;i<n;i++){
            if(a.find(a1[i])!=a.end()){
                auto it=a.find(a1[i]);
                it->second=it->second+1;
            }else{
                a.insert({a1[i],1});
            }
        }
        for(int i=0;i<m;i++){
            if(a.find(a2[i])!=a.end()){
                t=1;
            }else{
                t=0;
                break;
            }
        }
    }
    if(t==0){
        return "No";
    }else if(t==1){
        return "Yes";
    }
}
