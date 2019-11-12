class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> str;
        size_t size = pattern.size();
	if(size==0) return str;
	map<char,vector<int> > match;
  	for(int i=0;i<size;i++)
		match[pattern[c]].push_back(i);
	size_t  size_m = match.size();
	size_t size_w = words.size();
	
	for(int i=0;i<size_w;i++)
	{
	string substr = words[i];
	map<char,vector<int>>::iterator it;
	for(it = match.begin();it!=match.end();it++)
	{
	char  c =  it->first;
	vector<int> current = it->second;
	size_t size_current = current.size();
	int chazhi = c-str[current[0]]; 
	int j =1;
	for( j=1;j<size_current;j++)
	{
	if(chazhi!= c-str[current[j]])
		break;
	}
	if(j==size_current)
		str.push_back(substr);

	}
	//str.push_back(substr);

	}      
        
        
        return str;
        
    }
};




