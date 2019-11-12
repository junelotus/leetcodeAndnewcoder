class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        size_t size = sequence.size();
        if(size<=0) return false;
        if(size<=2) return true;
        vector<int> re;
        re.push_back(0);
        re.push_back(size-1);
        int counter=2;
        while(!re.empty())
        {
            int j= re.back();
            int d =sequence[j];
            re.pop_back();
            int i=re.back();
            int t=i;
            for(;i<j;i++)
             if(sequence[i]>=sequence[j]) break;
            for(int k = i;k<j;k++)
              if(sequence[k]<sequence[j]) return false; 
             if(i-1<=t) re.pop_back();
             else {
                    re.push_back(i-1);
                    counter++;
             }
             if(j-1>=i)
             {
                 re.push_back(i);
                 re.push_back(j-1);
                 counter+=2;
             }

             //if(counter==size) break; 


        }
return true;


        // return  judge(sequence,0,size-1);

    
    }
    // bool judge(vector<int> s,int b,int e)
    // {
    //      if(b>=e) return true;
    //     int d = s[e];
    //     int i;
    //     for(i=b;i<e;i++)
    //      if(s[i]>=d) break;
    //     int j=i;
    //     while(j<e)
    //     {
    //         if(s[j]<d) return false;
    //         j++;
    //     }
    //   return  judge(  s,  b,  i-1)&& judge(s,i,e); 


    // }



    
};