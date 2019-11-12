class Solution {
public:

    bool dunk(vector<vector<char>> board,int c,char ch)
    {
        for(int i=0;i<9;i++)
         if(board[i][c]==ch)
          return false;

        return true;  

    } 
    bool dunk1(vector<vector<char>> board,int r,int c,char ch)
    {
        r=r/3;
        c=c/3;
        for(int t=r*3;t<r*3+3;t++)
         for(int tt=c*3;tt<c*3+3;tt++)
          if(board[t][tt]==ch)
            return false;

        return true;  


    }
    void solveSudoku(vector<vector<char> > &board) {
        size_t hang = board.size();
        size_t lie = board[0].size();
        
bool flag =false;
fun( board,  0,0,  flag);
            
return ;

    }



void fun(vector<vector<char>> &board,int r,int c,bool &flag)
{
    if(r==9)
    {
        flag = true;
        return ;
    }
    if(c==9)
     return  fun( board, r+1,  0,flag);
    if(board[r][c]!='.')
     return fun( board, r,  c+1,flag);
 
    for(int i=1;i<=9;i++)
    {
        if( find(board[r].begin(),board[r].end(),(i+'0'))==board[r].end()  && dunk( board, c, i+'0') && dunk1( board,  r,c, i+'0'))
        {
            board[r][c] = (i+'0');
            fun( board,  r,c+1,  flag);
            if(flag) return ;
            board[r][c] = '.';
            
        }


    }
return ;


}

};
