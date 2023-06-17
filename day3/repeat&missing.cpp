vector<int> Solution::repeatedNumber(const vector<int> &A) {
   int n1 = A.size();
    int mem[n1+1];
    memset(mem,0,sizeof(mem));
    for(int i=0;i<n1;i++){
        mem[A[i]]++;
    }
    vector<int>len(2);
    for(int i=1;i<=n1;i++){
        if(mem[i]==2)len[0]=i;
        else if(mem[i]==0)len[1]=i;
    }
    return len;
}
