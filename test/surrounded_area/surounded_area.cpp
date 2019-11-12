#include <map>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <algorithm>
// #include <limits.h>
using namespace std;
class Solution {
public:

bool foo(const vector<vector<char>> &board,int begin,int end)
{
    if(!(begin>=0&&begin<board.size() && end>=0&&end<board[0].size())) return false;
    if(board[begin][end]=='O') return true;
    return false;


}
    void solve(vector<vector<char>> &board) {
        size_t size =board.size();
        if(size<=1) return ; 
        size_t subsize = board[0].size();
        if(subsize<=1) return ;
        for(int i=0;i<size;i++)
        {
            if(board[i][0]=='O')
                seed.push_back(i*subsize);
            if(board[i][subsize-1]=='O')    
                seed.push_back((i+1)*subsize-1);
        }

        for(int j=0;j<subsize;j++)
        {
            if(board[0][j]=='O')
                seed.push_back(j);
            if(board[size-1][j]=='O')    
                seed.push_back((size-1)*subsize+j);

        }

        while(!seed.empty())
        {
            int t =seed.back();
            int a = t/subsize;
            int b= t%subsize;
            if(flag.find(t)!=flag.end()) seed.pop_back();
            else {
                flag.insert(t);
                bool wode =foo( board,a-1,b);
                if(wode && flag.find(t-subsize)==flag.end())
                    seed.push_back(t-subsize);
                 wode =   foo( board,a+1,b); 
                 if(wode && flag.find(t+subsize)==flag.end())
                    seed.push_back(t+subsize);
                 wode =   foo( board,a,b-1) ;
                 if(wode && flag.find(t-1)==flag.end())
                    seed.push_back(t-1);
                 wode =   foo( board,a,b+1) ;
                 if(wode && flag.find(t+1)==flag.end())
                    seed.push_back(t+1);

            }

        }
        for(int i=0;i<size;i++)
        for(int j=0;j<subsize;j++)
        {
            if(flag.find(i*subsize+j)==flag.end())
                board[i][j]='X';

        }
        




        // for(size_t i=0;i<size;i++)
        //     for(size_t j=0;j<subsize;j++)
        //     {
        //         if(board[i][j]!='X')
        //             {
        //                 // cout<<i<<" "<<j<<endl;
        //                 bool curflag =true;
        //                 fun(board,i,j,size,subsize,curflag);
        //                 if(curflag==false)
        //                 {
        //                     position.clear();
        //                     curflag=true;

        //                 }
        //                 for(int k=0;k<position.size();k++)
        //                 {
        //                     int d = position[k];
        //                     board[d/subsize][d%subsize] = 'X';
        //                  }
        //                 //  cout<<"position.size() ="<<position.size()<<endl;
        //             }

        //     }


        
        
        return ; 
    }

//     void fun(vector<vector<char>>  board ,int begin,int end,int rows,int cols,bool &curflag)
//     {
//         // cout<<"begin="<<begin<<" end="<<end<<endl;
//         if(flag[begin*cols+end]) return ;
//         if(begin>=rows || end>=cols ||begin<0 || end<0)  { curflag=false;return ;} 
//         if(board[begin][end] == 'X' ) return ;
//         if(board[begin][end] == 'O' && flag[begin*cols+end]==false)
//         {
//             position.push_back(begin*cols+end);
//             flag[begin*cols+end]  = true;
//             fun(  board ,  begin-1,  end,  rows,  cols,  curflag);
//             fun(  board ,  begin+1,  end,  rows,  cols,  curflag);
//             fun(  board ,  begin,  end-1,  rows,  cols,  curflag);
//             fun(  board ,  begin,  end+1,  rows,  cols,  curflag);
         
//         }




//     }

unordered_set<int > flag;
vector<int>  position;
vector<int> seed;

};

int main()
{
    Solution so;
    vector<vector<char>> re{{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
    so.solve(re);
    for(int i=0;i<re.size();i++)
        {for(int j=0;j<re[0].size();j++)
        cout<<re[i][j]<<" ";
        cout<<endl;}


    return 0;

}