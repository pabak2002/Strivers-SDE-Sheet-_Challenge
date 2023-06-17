#include<algorithm>
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int rept=-1;
int miss=-1;
    int n=A.size();
   
    int freq[n+1]={0};
   
    for(int i=0;i<n;i++){
        freq[A[i]]++;
    }
   
    for(int i=0;i<=n;i++){
        if(freq[i]==0)
        miss=i;
        if(freq[i]==2)
        rept=i;
    }
   
    return {rept,miss};
}
