#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
bool fun(vector<int> cu,int i)
{
    for(int j=0;j<cu.size();j++)
        {
            if(abs(cu.size()-j)/abs(i-cu[j]) ==1) return false;


        }
        return true;

}
   int totalNQueens(int n) {
       if(n<=1) return n;
       
        vector<vector<int>> re;
        unordered_set<int> s;
        vector<int> cu;
        cu.push_back(0);
        s.insert(0);
        int i=0;
        while(!cu.empty() || i<n)
        {
            if(cu.empty())
            {
                cu.push_back(i);
        s.insert(i);
        i=0;
        continue;

            }
            // cout<<"wode"<<endl;
            for(;i<n;i++)
            {
                
                if(find(s.begin(),s.end(),i)==s.end() && fun(  cu,  i))//abs(i-cu.back())>1 &&
                {
                    // cout<<"i="<<i<<endl;
                    cu.push_back(i);
                    s.insert(i);
                    // for(int j=0;j<cu.size();j++)
                    //             cout<<cu[j]<<" ";
                    //             cout<<endl;
                    if(cu.size()==n)
                        {
                            // for(int j=0;j<n;j++)
                            //     cout<<cu[j]<<" ";
                            //     cout<<endl;
                            re.push_back(cu);
                            int d = cu.back();
                            i=d+1;
                            cu.pop_back();
                            s.erase(d);
                        
                        }
                        else 
                        i=0;
                    break;
 
                }

            }

            if(i==n)
            {
                // cout<<"nide"<<endl;
                int d = cu.back();
                i=d + 1;

                // cout<<"nide i="<<i<<endl;
                cu.pop_back();
                s.erase(d);
            }

        }

        return re.size();
        
    }
};

int  main()
{
    Solution so;
    // vector<vector<int>> re  =so.solveNQueens(6);
    cout<<so.totalNQueens(8)<<endl;
    // for(int i=0;i<re.size();i++)
    // {for(int j=0;j<re[0].size();j++)
    // cout<<re[i][j]<<" ";
    // cout<<endl;

    // }
    return 0;

}

 /*[↵ [".Q..",  // Solution 1↵  "...Q",↵  "Q...",↵  "..Q."],↵↵ ["..Q.",  // Solution 2↵  "Q...",↵  "...Q",↵  ".Q.."]↵]*/