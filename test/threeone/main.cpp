int fun(vector<int> n)
{

size_t size= n.size();
if(size==1) return n[0];
vector<int> re(32,0);
for(size_t i=0;i<size;i++)
{
    //n[i]=abs(n[i]);
    int j=0;
    while(n[i]!=0&&j<32)
    {
        if(n[i]&1==1) re[j]+=1;
        n[i] = n[i]>>1;
        j++;
    }

}
int wode=0;
for(int i=0;i<32;i++)
{
    cout<<re[31-i]<<endl;
    if(re[31-i]%3==0)
        wode=wode<<1;
    else   
        wode=((wode<<1)|1);
}

return wode;

}


 Single Number的本质，
 就是用一个数记录每个bit出现的次数，
 如果一个bit出现两次就归0，
 这种运算采用二进制底下的位操作^是很自然的。
 Single Number II中，
 如果能定义三进制底下的某种位操作，
 也可以达到相同的效果，
 Single Number II中想要记录每个bit出现的次数，
 一个数搞不定就加两个数，
 用ones来记录只出现过一次的bits，
 用twos来记录只出现过两次的bits，
 ones&twos实际上就记录了出现过三次的bits，
 这时候我们来模拟进行出现3次就抵消为0的操作，
 抹去ones和twos中都为1的bits。
 public int singleNumber(int[] A) {
        int ones = 0;//记录只出现过1次的bits
        int twos = 0;//记录只出现过2次的bits
        int threes;
        for(int i = 0; i < A.length; i++){
            int t = A[i];
            twos |= ones&t;//要在更新ones前面更新twos
            ones ^= t;
            threes = ones&twos;//ones和twos中都为1即出现了3次
            ones &= ~threes;//抹去出现了3次的bits
            twos &= ~threes;
        }
        return ones; 
    }

 class Solution {
public:
    string longestCommonPrefix(vector<string> &str) {
        size_t size=str.size();
        if(size==0) return "";
        if(size==1) return str[0];
        // std::sort(str.begin(),str.end());
        // int i=0;
        // int l = std::min(str[0].size(),str[size-1].size());
        // while(i<l)
        // {
        //     if(str[0][i]!=str.back()[i])
        //      break;
        //      i++;
        // }
        // return str[0].substr(0,i);
        int d=str[0].size(); 
        int i=0,j=1;
        for(;i<str[0].size();i++)
         for( j=1;j<size;j++)
            if(i>=str[j].size() || str[j][i]!=str[j-1][i])
            return str[0].substr(0,i);
        //if(i>=str[j].size()) return str[0].substr(0,i-1);
        return  str[0];
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
           if(!strs.size()) return "";
           sort(strs.begin(),strs.end());
           int i=0,sz=strs.size(),l=min(strs[0].size(),strs[sz-1].size());
           for(;i<l;i++)
               if(strs[0][i]!=strs[sz-1][i])
                  return strs[0].substr(0,i);
           return strs[0].substr(0,l);
    }
};



class Solution {
public:
    int find(string re)
    {
        int d =re.size();
         if(d>=3 && re[d-1]==re[d-2] &&re[d-3]==re[d-2]  &&re[d-3]=='.') return -1; 

        if(d>=2)
         if(re[d-1]==re[d-2] &&re[d-1]=='.') return 2;
        if(d>=1) if(re[d-1]=='.') return 1;
       
        return 0;
    }
    string simplifyPath(string path) {

    size_t size= path.size();

    if(size==0 ||( path[0]!='/')) return path;
    if(size==1) return path;
     
    size_t  i=0;
    string re="";

    while(i<size)
    {
        if(path[i]!='/')
            re+=path[i];
        else{
            
            int d =find(re);
            if(d==-1) return "";
            if(d==1)
                re.resize(re.size()-1);
            if(d==2)
            {
                int t=re.size()-1;
                int counter=0;
                while(t>=0&&counter<2)
                {
                    if(re[t]=='/') counter++;
                    t--;
                }
                if(t==-1&&counter<2) return "";
                re.resize(t+1);

            }
           
if(re.empty()||re.back()!='/') re+='/'; 
        }
             
        i++;    




    }
    if(re.size()>1&&re.back()=='/') re.resize(re.size()-1);

return re;
    }
};