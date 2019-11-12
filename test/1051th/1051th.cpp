class Solution {
public:
    int heightChecker(vector<int>& heights) {
	size_t size = heights.size();
	if(size==0) return 0;
	vector<int> wode = heights;
       std::sort(heights.begin(),heights.end());
  	int counter=0;
	for(int i=0;i<size;i++)
         counter+=(heights[i]==wode[i]?0:1)

	return counter;

   
    }
};
