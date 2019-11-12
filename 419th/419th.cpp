/*
Given an 2D board, count how many battleships are in it. The battleships are represented with 'X's, empty slots are represented with '.'s. You may assume the following rules:

    You receive a valid board, made of only battleships or empty slots.
    Battleships can only be placed horizontally or vertically. In other words, they can only be made of the shape 1xN (1 row, N columns) or Nx1 (N rows, 1 column), where N can be of any size.
    At least one horizontal or vertical cell separates between two battleships - there are no adjacent battleships.

Example:

X..X
...X
...X

In the above board there are 2 battleships.

Invalid Example:

...X
XXXX
...X

This is an invalid board that you will not receive - as battleships will always have a cell separating between them.

Follow up:
Could you do it in one-pass, using only O(1) extra memory and without modifying the value of the board?*/


class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
 vector<vector<char>>::size_type  size = board.size();
	if(size ==0) return 0;

vector<vector<char>>::size_type  size_hang = board[0].size();
if(size_hang==0) return 0;
for( vector<vector<char>>::size_type i=0;i<size;i++)
	for( vector<vector<char>>::size_type j=0;j<size_hang;j++)
	{
	if( board[i][j]=='X' && (i!=0&&(board[i-1][j] == 'X' || board[i-1][j] == 'Y')  ||(i!=size-1 && board[i+1][j] == 'X'|| board[i+1][j] == 'Y') ) && ((j!=0 &&(board[i][j-1]== 'X' ||board[i][j-1] == 'Y' )  ) || ( j!=hang_size-1 && (board[i][j+1] == 'X' || board[i][j+1] == 'Y' )  )  ))//上下和前后
	board[i][j] = 'Y';


	}

for( vector<vector<char>>::size_type i=0;i<size;i++)
        for( vector<vector<char>>::size_type j=0;j<size_hang;j++)
{
if()


}


       
    }
};
