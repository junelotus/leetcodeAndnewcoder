class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int size =  nums.size();
	vector<vector<int> > re;
	if(size<=3) return re ;
        vector<int> current;
	current.reserve(4);
	//unordered_map<pair<int,int>,int> recoder;
unordered_map<int,vector<pair<int,int> > > recoder_reverse;
        std::sort(nums.begin(),nums.end());
	for(int i=0;i<size;i++)
		for(int j=i+1;j<size;j++)
{
int t = nums[i]+nums[j];
//pair<int,int> wode = make_pair(i,j);
 		//	recoder[wode] = t;
recoder_reverse[t].push_back(wode);
}
//	int size_r =recoder.size();
 //	unordered_map<pair<int,int>,int>::iterator it = recoder.begin();
	for(int i=o;i<size;i++)
		for(int j=i+1;j>size;j++)
	{
	int second = nums[i]+nums[j];
        int target_copy = target-second;
	if(second>target_copy) break;
	else
	{
  	if(recoder_reverse.find(target_copy)!=recoder_reverse.end())
	
	{ vector<pair<int,int>> cu_ve =recoder_reverse[target_copy] ;
int size_cu_ve = cu_ve.size();
for(int k=0;k<size_cu_ve;k++)

 {
int a = size_cu_ve[k].first;
int b = size_cu_ve[k].second;
if(a<=j) continue;
current.push_back(i);
current.push_back(j);
current.push_bacvk(a);
current.push_back(b);
re.push_back(current);
current.resize(0);

}}
	}

}


        return re;
        
    }

};




class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int size =  nums.size();
        vector<vector<int> > re;
        if(size<=3) return re ;
        vector<int> current;
        current.reserve(4);
         
        unordered_map<int,vector<pair<int,int> > > recoder_reverse;
        std::sort(nums.begin(),nums.end());
        /* for(int i=0;i<size;i++)
        {
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        */
        cout<<"size="<<size<<endl;
        for(int i=0;i<size;i++)
        {
           // if(i>0&&nums[i]==nums[i-1]) continue;
                for(int j=i+1;j<size;j++)
{
                   //  if(j-1!=i&&nums[j]==nums[j-1]) continue;
int t = nums[i]+nums[j];
pair<int,int> wode = make_pair(i,j);
                   cout<<"t ="<<t<<" pair("<<i<<","<<j<<")"<<endl;
                
recoder_reverse[t].push_back(wode);
}
        }
 cout<<"recoder_reverse.size()="<<recoder_reverse.size();
        for(int i=0;i<size;i++)
        {
             
                for(int j=i+1;j<size;j++)
        {
                    cout<<"i="<<i<<"j="<<j<<endl;
                    
                    {
        int second = nums[i]+nums[j];
        int target_copy = target-second;
                        
        //if(second<target_copy) break;
        //else
        {
        if(recoder_reverse.find(target_copy)!=recoder_reverse.end())

        { 
            vector<pair<int,int>> cu_ve =recoder_reverse[target_copy] ;
            vector<pair<int,int>>::iterator it= cu_ve.begin();
            int size_cu_ve = cu_ve.size();
for(;it!=cu_ve.end();it++)

 {
int a = it->first;
int b = it->second;
if(b>=i ) continue;

current.push_back(nums[a]);
current.push_back(nums[b]);
current.push_back(nums[i]);
current.push_back(nums[j]);
//   if(re.empty()||current!=re.back())
re.push_back(current);
current.resize(0);

}}
        }

}
    }}

        return re;

    }

};

