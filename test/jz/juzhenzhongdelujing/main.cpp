class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {

		int size =0;
		while(str[size]!='\0')
		   size++;
    int x=0,y=-1;
vector<char> f(rows*cols,'O');
int counter =0;
bool re=false;
while(x<rows&&y<cols){
	re = fun(  f, x, y,matrix,rows,cols,  str,  0,  counter,  0,  0,0 size);
	if(re) break;
}

return re;

 
    }

   bool fun(vector<char> f,int &x,int &y,char * m,int r,int c,char * str,int begin,int counter,int i,int j,int size)
	{ 
		if(counter==size) return true;
		
		if(i<0||i>=c||j<0||j>=r) return false;
		if(counter==0){
		for(;x<r;x++)
 			for(y+=1;y<c;y++)
			{
	
      			if(m[x*r+y] == str[begin])
 					{
				 	f[x*c+y]=='I';
					counter++;
					}
			}
			 

			}

	if(x>=r||y>=c) return false;
	if(m[i*c+j]!=str[begin] || f[i*c+j]=='I')
      return false;
	else  
	 f[i*c+j]=='O';


	 bool flagu  = fun(  f, x, y, m, r,  c, str,  begin+1,  counter,i-1,j,size );
	 bool flagb  = fun(  f, x, y, m, r,  c, str,  begin+1,  counter,i+1,j,size );
	 bool flagl  = fun(  f, x, y, m, r,  c, str,  begin+1,  counter,i,j-1,size );
	 bool flagr  = fun(  f, x, y, m, r,  c, str,  begin+1,  counter,i,j+1,size );

	 return flagu|flagb|flagl|flagr;

      
        



	}
};

// void  find(char a,char *m,int &x,int &y,int rows,int cols)
// {
// for(;x<rows;x++)
//  for(;y<cols;y++)
// 	{
	
//       if(m[x*rows+y] == a)
//  		{
// return ;
// }


// 	}	
// return ;
// }

















































class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {

		int size =0;
		while(str[size]!='\0')
		   size++;
    int x= -1;
vector<char> f(rows*cols,'O');
int counter =0;
bool re=false;
string current="";
while(x<rows*cols){
	 re = fun(  f, x,matrix,rows,cols,  str,  0,  counter,  0,  0,size,current);
	if(re) break;
}

return re;

 
    }

   bool fun(vector<char> f,int &t ,char * m,int r,int c,char * str,int begin,int counter,int i,int j,int size,string current)
	{ 
		if(counter==size) {cout<<current<<endl;return true;}
		
		if(i<0||i>=r||j<0||j>=c) return false;
		if(counter==0){
			int x = t/c;
			int y = t%c;
			t+=1;
			while(t<r*c)
			{
				if(m[t]==str[begin])
				 break;
				t++;
			}
		 
		if(t>=r*c) return false; 
		i=t/c;
		j=t%c; 

			}

	
	if(m[i*c+j]!=str[begin] || f[i*c+j]=='I')
      return false;
	else  
    {
        f[i*c+j]='I';
     current+=str[begin];
	 counter++;
    }

	 bool flagu  = fun(  f, t,   m, r,  c, str,  begin+1,  counter,i-1,j,size,current );
	 bool flagb  = fun(  f, t,   m, r,  c, str,  begin+1,  counter,i+1,j,size,current );
	 bool flagl  = fun(  f, t,  m, r,  c, str,  begin+1,  counter,i,j-1,size ,current);
	 bool flagr  = fun(  f, t,   m, r,  c, str,  begin+1,  counter,i,j+1,size ,current);

	 return flagu|flagb|flagl|flagr;

      
        



	}
};

 