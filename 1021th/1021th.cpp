/*A valid parentheses string is either empty (""), "(" + A + ")", or A + B, where A and B are valid parentheses strings, and + represents string concatenation.  For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

A valid parentheses string S is primitive if it is nonempty, and there does not exist a way to split it into S = A+B, with A and B nonempty valid parentheses strings.

Given a valid parentheses string S, consider its primitive decomposition: S = P_1 + P_2 + ... + P_k, where P_i are primitive valid parentheses strings.

Return S after removing the outermost parentheses of every primitive string in the primitive decomposition of S.

*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;



class Solution {
public:
    string removeOuterParentheses(string S) {
 	int size = S.size();
	if(size<=2) return S;
	vector<int> a ;
	vector<pair<int,int> > b;
	for(int i=0;i<size;i++)
	{
	if(S[i]=='(' )
		a.push_back(i);
	else {
	while(!a.empty() && S[i]==')')
	{

	int d =a.back();
	b.push_back(pair<int,int>(d,i));
	cout<<d<<"  "<<i<<endl;
	a.pop_back();		
			
	i++;
   //if(i<size &&S[i]=='(') i--;
	}
i--;	
	}	
	}
       
  	size  = b.size();
	bool flag = true;
	for(int i=size-1;i>=1;i--)
	{      int f_1 = b[i].first;
   	       int f_2 = b[i].second;
		if(f_1==-1) continue;
	       int s_1 = b[i-1].first;
		int s_2 = b[i-1].second;
		if(f_1<s_1 &&f_2>s_2 )
	       {
		
		if(f_1 == s_1-1 && f_2==s_2+1 && flag ||( f_1 < s_1-1 ||f_2>s_2+1 ) )
			{	
			S[f_1] ='*';
			 S[f_2] = '*';
      			
			if(f_1 == s_1-1 && f_2==s_2+1 )
				flag =  false;
			else 
				flag = true;
			}
	
		}
  else flag = true;
	}

  cout<<S<<endl;
	int count =0;
	size = S.size();
	for(int  i=0;i<size;i++)
	{	
		if(S[i]=='*') count++;
	else 
	
		S[i-count] =S[i];

	}	
S.resize(S.size()-count);
return S;

    }
};



int main()
{

Solution so;
string S = "((()))";
cout<<so.removeOuterParentheses(S)<<endl;
cout<<endl;
S = "(()())(())";
cout<<so.removeOuterParentheses(S)<<endl;
cout<<endl;
S = "(()()()())";
cout<<so.removeOuterParentheses(S)<<endl;
cout<<endl;
S = "(((())))";
cout<<so.removeOuterParentheses(S)<<endl;
cout<<endl;

S = "()()()()()";
cout<<so.removeOuterParentheses(S)<<endl;
cout<<endl;



return 0;



}
