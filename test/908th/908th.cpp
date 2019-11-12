class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
   size_t size  = A.size();
	if(size==0) return 0;
int sum =0;
for(int i=0;i<size;i++)
	sum+=A[i];
int avg = (sum+1)/size;
//std::sort(A.begin(),A.end());
if(K==0) return A.back()-A[0];
int re =0;
int min = A[0],max =A[0];
int avg_=A[0];
for(int i=1;i<size;i++)
 {
if(A[i]<min) min =A[i];
if(A[i]>max) max =A[i];
if(avg_>avg) avg_=A[i];
if(A[i]<=avg && avg_<A[i]) avg_=A[i];


}
if(max-K<=avg_ && min+K>=avg_) return 0;
return max-min-k-k;
	  
        
    }
};
