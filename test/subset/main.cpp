class Solution {
public:
    vector<vector<int> > subsetsWithDup(vector<int> &s) {
        size_t size =s.size();
        if(size==0) return {{}};

    vector<vector<int>> re;
    vector<int> subre;
    std::sort(s.begin(),s.end());
    fun( s, subre, re,0,size);
re.push_back({});
return re;



    }

    void fun(vector<int> s,vector<int> subre,vector<vector<int>> &re,int begin,int end)
    {
            if(begin==end) {

                re.push_back(subre);
                return ;
            }
            for(int i=begin;i<end;i++)
            {
                if(s[i]==s[begin] &&i!=begin) continue;
                subre.push_back(s[i]);
                fun(  s, subre, re,  begin+1,end);
                subre.pop_back();

            }


    }


};