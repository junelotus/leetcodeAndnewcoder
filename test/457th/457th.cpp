
class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
  
	int size = nums.size();
	for(int i=0;i<size;i++)
			
		{
			int d = nums[(nums[i]+i+size)%size];
			if(d*nums[i]<0 ) nums[i]=i;
			else 
		nums[i] = (nums[i]+i+size)%size;
		cout<<"nums[i] = "<<nums[i]<<endl;
		//if(i==nums[i]) nums[i] = 0;
}
	int abs = 1;
	for(int  i=0;i<size;i++)
	{	if(nums[i]<0 || nums[i] == i) continue;
	
		else {
		int t =nums[i];
		int j =i;
		while(j>=0 && nums[j]!=j){
		cout<<"t = "<<t<<" j="<<j<<endl;
		t = nums[j];
		if(t>=0)
		 nums[j] = 0-abs;
		j = t;
		}
		if( j==0-abs) return true;

	abs++;
	}

return false;      
    }
};


class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {

        int size = nums.size();
		 for(int i=0;i<size;i++){
			 int wode  = ((nums[i]%size+size)%size+i)%size;
			 int d = nums[wode];
			if(d*nums[i]<=0 ) nums[i]=0;
			  

		 }
        for(int i=0;i<size;i++)

                {
					if(nums[i]==0) continue;
					
                nums[i] = ((nums[i]%size+size)%size+i)%size;
				if(nums[i] ==0) nums[i]=-1;
                //cout<<"nums[i] = "<<nums[i]<<endl;
                //if(i==nums[i]) nums[i] = 0;
}
for(int i=0;i<size;i++){
			 
			if(nums[i]==0 ) nums[i]=i;
			if(nums[i]==-1) nums[i] =0;
			   cout<<"nums[i] = "<<nums[i]<<endl;

		 }

        int abs = 1;
        for(int  i=0;i<size;i++)
        {       if(nums[i]<0 || nums[i] == i) continue;

                else {
                int t =nums[i];
                int j =i;
                while(j>=0 &&nums[j]!=j){
                cout<<"t = "<<t<<" j="<<j<<endl;
                t = nums[j];
                if(t>=0)
                 nums[j] = 0-abs;
                j = t;
                }
				
                if( j==0-abs) {cout<<"j= "<<j<<endl;return true;}
        }
        abs++;
        }

return false;
    }
};

